import java.util.ArrayList;

public class Problem07 {
    public static void main(String[] args) {
        ArrayList<Integer> primes = new ArrayList<>();
        int i = 0;

        while (primes.size() < 10_001) {
            if (Utils.isPrime(i)) {
                primes.add(i);
            }

            i += 1;
        }

        System.out.println(primes.getLast());
    }
}
