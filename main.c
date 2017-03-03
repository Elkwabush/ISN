// ############################################# //
//                                               //
// Tristan PREVOST                               //
// Maxime BRECQUEVILLE                           //
// Victor COTTIN                                 //
//                                               //
// Dernière modification : 01.03.2017            //
//                                               //
// #I# Macros                                    //
// #II# Structures                               //
// #III# Variables globales                      //
// #IV# Fonctions                                //
// #V# Main                                      //
// ############################################# //

/*
Références détaillées:
#I# Macros
#II# Structures
#III# Variables globales
#IV# Fonctions
    #IV-1# Menu
    #IV-2# Entrees 
    #IV-3# MiseAJour
    #IV-4# Affichage
	#IV-5# Credits
#V# Main
*/

#include "graphics.h"

//#I# Macros ----------

#define L 800
#define H 800

//#II# Structures ----------

//#III# Variables globales ----------

int etatDuJeu; 
/*Prend la valeur:
0 pour en train d'être quitté,
1 pour dans le menu,
2 pour en jeu
3 pour dans les crédits*/

//#IV# Fonctions ----------

//#IV-1# Menu
//Renvoi de 0 lorsque quitter est choisi, de 2 lorsque jouer est choisi
//(La fonction Menu gère par elle-même l'affichage et les interractions du joueur)
int Menu()
{
    return 0; //temp
}

//#IV-2# Entrees
//Renvoi de 1 si le joueur a appuyé sur échap., sinon met simplement à jour les variables gérant les entrées de la souris et du clavier
int Entrees()
{
    return 1; //temp
}

//#IV-3# MiseAJour
//Mise à jour du jeu et de toutes les variables en fonction des actions du joueur
void MiseAJour()
{
}

//#IV-4# Affichage
void Affichage()
{
}

//#IV-5# Credits
//Affichage des crédits
void Credits()
{
}

//#V# Main ----------

int main (int argc, char** argv)
{
    etatDuJeu = 1;
    while(etatDuJeu != 0)
    {
        if(etatDuJeu == 1) {etatDuJeu = Menu();}
        else if(etatDuJeu == 2)
        {
            etatDuJeu = Entrees();
			MiseAJour();
			Affichage();
        }
	else {Credits();}
    }
    return 0 ;
}
