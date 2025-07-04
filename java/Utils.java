public final class Utils {
    public static boolean isPalindrome(int n) {
        int m = n;
        int l = 0;

        while (m > 0) {
            l *= 10;
            l += m % 10;
            m /= 10;
        }

        return l == n;
    }

    public static boolean isPrime(long n) {
        if (n < 2) {
            return false;
        }

        long i = 2;

        while (i * i <= n) {
            if (n % i == 0) {
                return false;
            } else {
                i += 1;
            }
        }

        return true;
    }
}
