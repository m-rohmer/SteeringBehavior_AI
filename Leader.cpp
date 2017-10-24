#include "Leader.h"
#include "2d/C2DMatrix.h"
#include "2d/Geometry.h"
#include "SteeringBehaviors.h"
#include "2d/Transformations.h"
#include "GameWorld.h"
#include "misc/CellSpacePartition.h"
#include "misc/cgdi.h"

using std::vector;
using std::list;

//-------------------------------- Render -------------------------------------
//-----------------------------------------------------------------------------
void Leader::RenderLeader()
{
	//a vector to hold the transformed vertices
	static std::vector<Vector2D>  m_vecVehicleVBTrans;

	//render neighboring vehicles in different colors if requested
	if (m_pWorld->RenderNeighbors())
	{
		if (ID() == 0) gdi->RedPen();
		else if (IsTagged()) gdi->GreenPen();
		else gdi->BluePen();
	}

	else
	{
		if (this->Steering()->isWanderOn())
		{
			gdi->RedPen();
		}
		else {
			gdi->GreenPen();
		}	
	}

	if (Steering()->isInterposeOn())
	{
		gdi->RedPen();
	}

	if (Steering()->isHideOn())
	{
		gdi->GreenPen();
	}

	if (isSmoothingOn())
	{
		m_vecVehicleVBTrans = WorldTransform(m_vecVehicleVB,
			Pos(),
			SmoothedHeading(),
			SmoothedHeading().Perp(),
			Scale());
	}

	else
	{
		m_vecVehicleVBTrans = WorldTransform(m_vecVehicleVB,
			Pos(),
			Heading(),
			Side(),
			Scale());
	}


	gdi->ClosedShape(m_vecVehicleVBTrans);

	//render any visual aids / and or user options
	if (m_pWorld->ViewKeys())
	{
		Steering()->RenderAids();
	}
}
