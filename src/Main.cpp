#include "../include/Main.h"

using namespace std;

int main() {
    float re, im;
    cout << "Nombre Complexe :" << endl;
    cout << "re : ";
    cin >> re;
    cout << "im : ";
    cin >> im;
    cout << endl;

    Complex c = Complex(re, im);
    cout << "Réel : " << c.getReal() << endl;
    cout << "Imaginaire : " << c.getImaginary() << endl;
    cout << "Module : " << c.module() << endl;
    cout << "Argument : " << c.arg() << endl;
    cout << endl;

    cout << "Affichage sous la forme a + i.b :" << endl;
    c.display();
    c.swap();
    cout << "Affichage sous la forme a + i.b après permutation :" << endl;
    c.display();
    cout << endl;

    Complex a = Complex(1, 2);
    Complex b = Complex(3, 4);
    Complex res;

    cout << "Addition de a(1, 2) avec b(2, 3) :" << endl;
    res = a + b;
    res.display();
    cout << "Soustraction de a(1, 2) avec b(2, 3) :" << endl;
    res = a - b;
    res.display();
    cout << "Multiplication de a(1, 2) avec b(2, 3) :" << endl;
    res = a * b;
    res.display();
    cout << endl;

    cout << "Normalisation du complexe b(3, 4) : " << endl;
    Complex rNorm = Complex();
    rNorm = rNorm.normalize(b);
    rNorm.display();
    cout << endl;

    cout << "Rotation du complexe a(1, 2) : " << endl;
    Complex rotation = rotation.rotate(a, 3.14159 / 2);
    rotation.display();
    cout << endl;

    Complex rMax = Complex();
    rMax = rMax.maxModule(a, b);
    cout << "Définition à l'aide de la méthode max entre a(1, 2) et b(3, 4) :" << endl;
    rMax.display();
    cout << "Affectation de rMax en tant que paramètre de la fonction display :" << endl;
    a.display(rMax.maxModule(a, b));
    cout << "Définition a l'aide d'un maximum entre z2(2, 2) et z2² :" << endl;
    Complex z2 = Complex(2, 2);
    Complex z2Car = z2 * z2;
    Complex z1 = z1.maxModule(z2, z2Car);
    z1.display();
    cout << endl;

    cout << "Racine n-ième : " << endl;
    int n = 7;
    Complex tab[7];        //Meme chose que de déclarer un tableau de structure.
    tab[0].nRoot(n, tab);
    for (int i = 0; i < 7; i++) {
        tab[i].display();
    }

    return 0;
}

/*void sumProb(Complex a, Complex b, Complex& res) {
//On ne peut acceder aux membres privés de la classe Complex de cette façon.
    float re, im;
    re = a.re + b.re;
    im = a.im() + b.im;

    res = Complex(re, im);
}*/
