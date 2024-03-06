# PROJET OUTILLAGE 11/03/2024

JEU DE DEVINETTE AVEC DEUX FONCTIONS (jeudevinette( et main()))

## COMMENT EXECUTER LE PROGRAMME

<ol><li>Faire la commande : make </li>
<li> Ensuite : ./play  pour executer </li>
</ol>

## DOCUMENTATION  ARCHIVAGE  CLEAN

<ul>
<li> Pour faire la documentation: <strong>make doc</strong></li>
<li>Pour faire l' archivage: <strong>make archive</strong> </li>
<li>Pour supprimer l'éxécutable, les fichiers objets et la documentation ainsi que l'archive : <strong>make clean</strong></li>
</ul>

## ValGRIND 

On veut vérifier s'il n'y a pas de fuites mémoires

<ul>
<li>D'abord faire la commande : <b>make </b></li>
<li>Ensuite : <b>valgrind --leak=full./play</b> pour vérifier s'il n'ya aps eu de fuites mémoires</li>
<li>Ensuite vous allez voir les résultats que valgrind vous affichera</li>

Dans mon cas , j'ai pas eu de fuites mémoires 
</ul>



<li>Réalisé par MENDE FADEL , étudiant en L2 INFORMATIQUE S3P</li>