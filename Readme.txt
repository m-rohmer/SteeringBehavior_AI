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
- "Leader"	-> "Un leader" 		-> Mode mono-leader
		-> "Deux leaders" 	-> Si choisi, cr�e un deuxi�me leader (mode Wander, aucune int�raction avec les agents suiveurs)

- "Actions"		-> 	       Nom		|	Raccourci	|			     Description
				Pause			|	    P		| Met le monde en pause
				Manual mode On/Off	|           W		| Active/D�sactive le contr�le humain
				Flocking mode On/Off	|           F		| Active/D�sactive le mode Flocking : poursuite en formation V ou en ligne
				Obstacles On/Off	|	    X		| Active/D�sactive les obstacles
				Walls On/Off		|	    C		| Active/D�sactive les murs
				New path/follow path	|	    U		| Active le suivi de chemin pour le leader seulement, gen�re un chemin al�atoire
				Follow path Off		|	    I		| D�sactive le suivi de chemin
				Turn left/right		|	   Q/D		| Touches directionnelles pour diriger le leader (force le contr�le humain du leader)
				
Note : Dans le sous-menu "Actions", la fonction "Turn left/right" ne peut �tre contr�l�e que par les touches du clavier (bouton dans le menu � titre informatif).

------------------

3) Le deuxi�me leader n'a pas d'int�raction avec les agents suiveurs, mais si on l'impl�mentait, les suiveurs localiseraient au lancement du monde le leader
le plus proche et le suivrait jusqu'� trouver un agent plus proche, formant ainsi deux lignes derri�re les deux leader qui s'entrem�lent lorsque
ces deux files se croisent.

4) Avec un agent humain, les agents suiveurs continuent � suivre convenablement le leader


