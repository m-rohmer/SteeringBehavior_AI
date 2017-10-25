Tp#2 : Steering Behavior

Membre du groupe: Adrien PERRAUD PERA10089500
		  Louis  BERGER  BERL07109507
		  Martin ROHMER  ROHM04119503

Fonctionnement de l'application:
- Lors de l'ex�cution une fen�tre s'ouvre
- La position de d�part des agents (le leader et ses followers) est al�atoire
- Le leader proc�de � un d�placement d'itin�rance "WanderOn"
- Les agents followers apr�s quelques secondes se mettent en place en file indienne derri�re le leader
- Des murs ont �t� mis en place d�s l'ex�cution du code
- Tous les agents ont un comportement de "WallAvoidanceOn"

Une toolbar en haut de la fen�tre permet de modifier certains param�tres:
- "+ 1 agent"		-> Ajoute un agent suiveur et recharge le monde
- "- 1 agent"		-> Supprime un agent suiveur et recharge le monde
- "+ distance" 		-> Incr�mente de 5 l'offset de poursuite entre les followers
- "- distance"		-> D�cr�mente de 5 l'offset de poursuite entre les followers
- "Leader"		
		-> "Un leader" Si choisi, cr�e un leader
		-> "Deux leaders" Si choisi, cr�e deux leader (un seul suivi par les autres agents)

- "Actions"		-> 	       Nom		|	Raccourci	|			     Description
				Pause			|	    P		| Met le monde en pause
				Manual mode On/Off	|           W		| Active/D�sactive le contr�le humain
				Obstacles On/Off	|	    X		| Active/D�sactive les obstacles
				Walls On/Off		|	    C		| Active/D�sactive les murs
				New path/follow path	|	    U		| Active le suivi de chemin pour le leader seulement, gen�re un chemin al�atoire
				Follow path Off		|	    I		| D�sactive le suivi de chemin
				Turn left/right		|	   Q/D		| Touches directionnelles pour diriger le leader (force le contr�le humain du leader)
				





add/del agent, aug/red distance entre agent, mode manuel, murs, obstacles, deuxieme leader (sans influence), flocking V 'avion de chasse'