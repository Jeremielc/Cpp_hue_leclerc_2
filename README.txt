################################# Exercice 1 #################################
1) 4) Il est tout a fait possible d'ajouter un constructeur prenant ces
paramètres mais il est mathématiquement très difficile de réaliser l'opération
désirée.

################################# Exercice 2 #################################
Au cours de l'exécution du programme, on affiche à chaque fois la création d'un
nombre complexe et sa destruction. En retirant les lignes non nécéssaires, on
obtient cette trace d'exécution :

    +++ Complex(2, 3)           @		 0x7ffc5afb25f0    Création de 0
    +++ Complex(1, 2)       	@		 0x7ffc5afb2600    Création de 1
    +++ Complex(2, 3) 		    @		 0x7ffc5afb2610    Création de 2
    +++ Complex() 		        @		 0x7ffc5afb2620    Création de 3

    +++ Complex() 		        @		 0x7ffc5afb2630    Création de 4
    rrr Complex(3 + i.5) 		@		 0x7ffc5afb2630    Destruction de 4
    +++ Complex() 		        @		 0x7ffc5afb2640    Création de 5
    rrr Complex(-1 + i.-1) 		@		 0x7ffc5afb2640    Destruction de 5
    +++ Complex() 		        @		 0x7ffc5afb2650    Création de 6
    rrr Complex(-4 + i.7) 		@		 0x7ffc5afb2650    Destruction de 6

    rrr Complex(-4 + i.7) 		@		 0x7ffc5afb2620    Destruction de 3
    rrr Complex(2 + i.3) 		@		 0x7ffc5afb2610    Destruction de 2
    rrr Complex(1 + i.2) 		@		 0x7ffc5afb2600    Destruction de 1
    rrr Complex(3 + i.2) 		@		 0x7ffc5afb25f0    Destruction de 0

Dans la majorité des cas, on constate que les destructeurs sont appelés dans
l'ordre inverse des constructeurs.
Cependant, certains objets sont détruits juste après leur création. Cela est
certainement dû à un problème de synchronisation de l'affichage.

Pour des raisons de lisibilité, nous avons retirer cette partie de la trace
d'éxecution, étant donné que les affichages étaient enchevètrés avec le contenu
"utile" de la sortie.

################################# Exercice 3 #################################
3) 4) On remarque que l'initialisation statique d'un tableau d'instance de
classe s'éffectue de la même manière que l'instanciation d'un tableau de
structure ou de type primitif. Les instances de classes sont donc traitées de la
même façon que les variables.

L'option "-fno-elide-constructors" permet de désactiver l'optimisation faite par
g++ qui consiste à utiliser un objet temporaire avec le constructeur désiré (en
fonction des paramètres qui lui sont passés). A la place, on force la création
d'un objet à l'aide du constructeur par copie.

################################### Remarque ##################################
Veuillez vous reporter au fichier Trace.txt pour avoir la trace d'éxecution du
programme TP2 commenté.

################################### Critique ##################################
Etant donné que nous avons du investir une journée complète de notre
weekend pour préparer ce TP et pouvoir le finir avec seulement 30 minutes
d'avance sur l'heure de rendu estimée, nous nous demandons encore comment il est
possible de finir l'ensemble des TP dans les crénaux horaires qui nous sont
impartis.
