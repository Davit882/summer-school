import math
import sys

def get_input(label):
    value = input(f"{label} (կամ 'q'՝ դուրս գալու համար): ")
    if value.lower() == 'q':
        print("Դուրս եկավ ծրագրից։")
        sys.exit()
    return float(value)

def get_coefficients():
    while True:
        try:
            a = get_input("Մուտքագրեք a գործակիցը")
            b = get_input("Մուտքագրեք b գործակիցը")
            c = get_input("Մուտքագրեք c գործակիցը")
            return a, b, c
        except ValueError:
            print("Սխալ: Պետք է մուտքագրել թիվ։")

def calculate_discriminant(a, b, c):
    return b**2 - 4 * a * c

def solve_quadratic(a, b, c):
    if a == 0:
        if b == 0:
            if c == 0:
                return "infinite_solutions", ()
            else:
                return "no_solution", ()
        else:
            x = -c / b
            return "one_solution", (x,)
    else:
        D = calculate_discriminant(a, b, c)
        if D > 0:
            x1 = (-b + math.sqrt(D)) / (2 * a)
            x2 = (-b - math.sqrt(D)) / (2 * a)
            return "two_solutions", (x1, x2)
        elif D == 0:
            x = -b / (2 * a)
            return "one_solution", (x,)
        else:
            return "no_solution", ()

def main():
    a, b, c = get_coefficients()
    result_type, values = solve_quadratic(a, b, c)

    if result_type == "infinite_solutions":
        print("Հավասարումը ունի անվերջ շատ լուծումներ (0 = 0):")
    elif result_type == "no_solution":
        print("Հավասարումը լուծում չունի։")
    elif result_type == "one_solution":
        print("Հավասարումը ունի մեկ լուծում՝ x =", values[0])
    elif result_type == "two_solutions":
        D = calculate_discriminant(a, b, c)
        print("Դիսկրիմինանտ D =", D)
        print("Հավասարումը ունի երկու լուծում՝ x1 =", values[0], ", x2 =", values[1])

if __name__ == "__main__":
    main()

