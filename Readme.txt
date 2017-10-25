Tp#2 : Steering Behavior

Membre du groupe: Adrien PERRAUD PERA10089500
		  Louis  BERGER  BERL07109507
		  Martin ROHMER  ROHM04119503

Fonctionnement de l'application:
- Lors de l'exécution une fenêtre s'ouvre
- La position de départ des agents (le leader et ses followers) est aléatoire
- Le leader procède à un déplacement d'itinérance "WanderOn"
- Les agents followers après quelques secondes se mettent en place en file indienne derrière le leader
- Des murs ont été mis en place dès l'exécution du code
- Tous les agents ont un comportement de "WallAvoidanceOn"

Une toolbar en haut de la fenêtre permet de modifier certains paramètres:
- "+ 1 agent"		-> Ajoute un agent suiveur et recharge le monde
- "- 1 agent"		-> Supprime un agent suiveur et recharge le monde
- "+ distance" 		-> Incrémente de 5 l'offset de poursuite entre les followers
- "- distance"		-> Décrémente de 5 l'offset de poursuite entre les followers
- "Leader"		
		-> "Un leader" Si choisi, crée un leader
		-> "Deux leaders" Si choisi, crée deux leader (un seul suivi par les autres agents)

- "Actions"		-> 	       Nom		|	Raccourci	|			     Description
				Pause			|	    P		| Met le monde en pause
				Manual mode On/Off	|           W		| Active/Désactive le contrôle humain
				Obstacles On/Off	|	    X		| Active/Désactive les obstacles
				Walls On/Off		|	    C		| Active/Désactive les murs
				New path/follow path	|	    U		| Active le suivi de chemin pour le leader seulement, genère un chemin aléatoire
				Follow path Off		|	    I		| Désactive le suivi de chemin
				Turn left/right		|	   Q/D		| Touches directionnelles pour diriger le leader (force le contrôle humain du leader)
				





add/del agent, aug/red distance entre agent, mode manuel, murs, obstacles, deuxieme leader (sans influence), flocking V 'avion de chasse'