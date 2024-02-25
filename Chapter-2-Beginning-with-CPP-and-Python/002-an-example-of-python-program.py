def main():
    current_year = int(input("Enter the current year then press RETURN. "))
    current_age = int(input("Enter your current age in years. "))

    target_year = int(input("Enter the year for which you wish to know your age. "))
    target_age = target_year - (current_year - current_age)

    print()

    if target_age >= 0:
        print(f'Your age in {target_year} is {target_age}.')
    else:
        print(f'You were not even born in {target_year}.')

if __name__ == '__main__':
    main()