while True:
    a = input().split()
    name, age, weight = a[0], int(a[1]), int(a[2])
    
    if name == "#" and age == 0 and weight == 0:
        break

    if age <= 17 and weight < 80:
        print(f"{name} Junior")
    else:
        print(f"{name} Senior")
