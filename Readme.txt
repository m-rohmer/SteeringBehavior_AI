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
- "Leader"	-> "Un leader" 		-> Mode mono-leader
		-> "Deux leaders" 	-> Si choisi, crée un deuxième leader (mode Wander, aucune intéraction avec les agents suiveurs)

- "Actions"		-> 	       Nom		|	Raccourci	|			     Description
				Pause			|	    P		| Met le monde en pause
				Manual mode On/Off	|           W		| Active/Désactive le contrôle humain
				Flocking mode On/Off	|           F		| Active/Désactive le mode Flocking : poursuite en formation V ou en ligne
				Obstacles On/Off	|	    X		| Active/Désactive les obstacles
				Walls On/Off		|	    C		| Active/Désactive les murs
				New path/follow path	|	    U		| Active le suivi de chemin pour le leader seulement, genère un chemin aléatoire
				Follow path Off		|	    I		| Désactive le suivi de chemin
				Turn left/right		|	   Q/D		| Touches directionnelles pour diriger le leader (force le contrôle humain du leader)
				
Note : Dans le sous-menu "Actions", la fonction "Turn left/right" ne peut être contrôlée que par les touches du clavier (bouton dans le menu à titre informatif).

------------------

Le deuxième leader n'a pas d'intéraction avec les agents suiveurs, mais si on l'implémentait, les suiveurs localiseraient au lancement du monde le leader
le plus proche et le suivrait jusqu'à trouver un agent plus proche, formant ainsi deux lignes derrière les deux leader qui s'entremêlent lorsque
ces deux files se croisent.