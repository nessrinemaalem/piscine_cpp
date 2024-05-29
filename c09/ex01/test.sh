#!/bin/bash

# Fonction pour afficher le résultat d'une opération
function calculate() {
    ./RPN "$1"
}

# ---- Subject Test ---- 
echo "---- Subject Test ---- :"
echo ""

echo "8 9 * 9 - 9 - 9 - 4 - 1 +"
calculate "8 9 * 9 - 9 - 9 - 4 - 1 +"
echo ""

echo "7 7 * 7 -"
calculate "7 7 * 7 -"
echo ""

echo "1 2 * 2 / 2 * 2 4 - +"
calculate "1 2 * 2 / 2 * 2 4 - +"
echo ""

echo "(1 + 1)"
calculate "(1 + 1)"
echo ""

# Test des opérations basiques
echo "---- Test addition ----"
echo ""

echo "2 -2 + "
calculate "2 -2 +"
echo ""
echo "2 3 + 4 +"
calculate "2 3 + 4 +"
echo ""

echo "---- Test soustraction ----"
echo ""

echo "5 2 -"
calculate "5 2 -"
echo ""

echo "1 -1 -"
calculate "1 -1 -"
echo ""

echo "---- Test multiplication ----"
echo ""

echo "4 5 *"
calculate "4 5 *"
echo ""

echo "2 -2 *"
calculate "2 -2 *"
echo ""

echo "9 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 *"
calculate "9 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 * 9 *"
echo ""

echo "---- Test division ----"
echo ""

echo "4 2 /"
calculate "4 2 /"
echo ""

echo "8 -2 /"
calculate "8 -2 /"
echo ""

echo "---- Test erreurs ----"
echo ""

echo "9 0 /"
calculate "9 0 /"
echo ""

echo "toto"
calculate "toto"
echo ""

echo "test vide"
calculate ""
echo ""

echo "9 9 9 9 9 9 9"
calculate "9 9 9 9 9 9 9"
echo ""

echo "+ + + + + + +"
calculate "+ + + + + + +"
echo ""



// reste a proteger l'overflow et la modification du fichier csv dans lexo precedent
