public class Problem10 {
    public static void main(String[] args) {
        long sum = 0;

        for (long i = 0; i < 2_000_000; ++i) {
            if (Utils.isPrime(i)) {
                sum += i;
            }
        }

        System.out.println(sum);
    }
}
