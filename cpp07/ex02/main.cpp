#include "Array.hpp"
#include "Array.tpp"

int main() {
    try {
        std::cout << "▶ Création d'un tableau vide\n";
        Array<int> empty;
        std::cout << "Taille : " << empty.size() << std::endl;

        std::cout << "\n▶ Création d'un tableau de 5 éléments\n";
        Array<int> a(5);
        for (unsigned int i = 0; i < a.size(); ++i)
            a[i] = i * 10;

        std::cout << "Contenu du tableau a : ";
        for (unsigned int i = 0; i < a.size(); ++i)
            std::cout << a[i] << " ";
        std::cout << std::endl;

        std::cout << "\n▶ Test du constructeur par copie\n";
        Array<int> b(a);
        b[0] = 999;

        std::cout << "a[0] = " << a[0] << " (doit être 0)\n";
        std::cout << "b[0] = " << b[0] << " (doit être 999)\n";

        std::cout << "\n▶ Test de l opérateur d affectation (=)\n";
        Array<int> c;
        c = a;
        c[1] = 888;

        std::cout << "a[1] = " << a[1] << " (doit être 10)\n";
        std::cout << "c[1] = " << c[1] << " (doit être 888)\n";

        std::cout << "\n▶ Test avec Array<std::string>\n";
        Array<std::string> strArr(3);
        strArr[0] = "Bonjour";
        strArr[1] = "le";
        strArr[2] = "monde";

        for (unsigned int i = 0; i < strArr.size(); ++i)
            std::cout << strArr[i] << " ";
        std::cout << std::endl;

        std::cout << "\n▶ Test d accès hors limites (doit lancer une exception)\n";
        std::cout << strArr[10] << std::endl; // Exception attendue ici

    } catch (const std::exception& e) {
        std::cerr << "❗ Exception attrapée : " << e.what() << std::endl;
    }
    return 0;
}