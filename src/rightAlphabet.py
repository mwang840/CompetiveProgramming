def main():
    inputs = int(input())
    for inp in range(inputs):
        strLen = int(input())
        s = str(input())
        a = "Timur"
        sA = s.split()
        aS = a.split()

        
        if(s == a):
            print("YES\n")
        else:
            print("NO\n")    
if __name__ == "__main__":
    main()
