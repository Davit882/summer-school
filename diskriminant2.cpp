#include <iostream>
#include <cmath>
using namespace std;

void solve_quadratic(double a, double b, double c) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Հավասարումը ունի անվերջ շատ լուծումներ (0 = 0):" << endl;
            } else {
                cout << "Լուծում չկա (հավասարումը սխալ է):" << endl;
            }
        } else {
            double x = -c / b;
            cout << "Գծային հավասարում։ Լուծումը՝ x = " << x << endl;
        }
    } else {
        double D = b * b - 4 * a * c;
        cout << "Դիսկրիմինանտ՝ D = " << D << endl;

        if (D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Երկու արմատ՝" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else if (D == 0) {
            double x = -b / (2 * a);
            cout << "Մեկ կրկնվող արմատ՝ x = " << x << endl;
        } else {
            cout << "Լուծում չկա։ Դիսկրիմինանտը բացասական է։" << endl;
        }
    }
}

int main() {
    double a, b, c;

    cout << "Մուտքագրեք a գործակիցը: ";
    cin >> a;
    cout << "Մուտքագրեք b գործակիցը: ";
    cin >> b;
    cout << "Մուտքագրեք c գործակիցը: ";
    cin >> c;

    if (cin.fail()) {
        cerr << "Սխալ: Պետք է մուտքագրել թվեր։" << endl;
        return 1;
    }

    solve_quadratic(a, b, c);
    return 0;
}

