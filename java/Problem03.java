import java.util.ArrayList;

public class Problem03 {
    public static void main(String[] args) {
        long n = 600_851_475_143L;
        int i = 2;
        ArrayList<Long> factors = new ArrayList<>();

        while ((long) i * i <= n) {
            if (n % i == 0) {
                n /= i;
                factors.add((long) i);
            } else {
                ++i;
            }
        }

        if (n > 1) {
            factors.add(n);
        }

        long max = 0;

        for (long num : factors) {
            if (num > max) {
                max = num;
            }
        }

        System.out.println(max);
    }
}
