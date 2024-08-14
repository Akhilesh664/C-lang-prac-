

public class LCMCalculator {

    // Function to calculate the Greatest Common Divisor (GCD) using Euclidean algorithm
    public static int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Function to calculate the Least Common Multiple (LCM) and print LCM factors
    public static void findLcm(int a, int b) {
        if (a == 0 || b == 0) {
            System.out.println("LCM is not defined for zero.");
            return;
        }

        int gcd = gcd(a, b);
        int lcm = (a * b) / gcd;

        System.out.println("LCM of " + a + " and " + b + " is " + lcm);

        // Printing LCM factors
        System.out.print("LCM factors: ");
        for (int i = 1; i <= lcm; i++) {
            if (lcm % i == 0) {
                System.out.print(i + " ");
            }
        }

        // prime factor
        System.out.print("prime factors: ");
        while(lcm %2 == 0){
            System.out.print("2, ");
            lcm/=2;
        }
        for(int i=3; i<Math.sqrt(lcm); i+=2){
            while(lcm%i == 0){
            System.out.printf("%d ,",i);
            lcm/=i;
            }
        }
        if(lcm>2){
            System.out.printf("%d",lcm);
        }
    }
    
    public static void main(String[] args) {
        int a = 34;
        int b = 67;
        findLcm(a, b);
    }
}
