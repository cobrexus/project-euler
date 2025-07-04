public class Problem12 {
    public static void main(String[] args) {
        for (int i = 1; ; ++i) {
            if (divisors(triangleNum(i)) > 500) {
                System.out.println(triangleNum(i));
                break;
            }
        }
    }

    static int divisors(int n) {
        int ret = 2;

        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                ++ret;
            }
        }

        return ret;
    }

    static int triangleNum(int nth) {
        return (nth * (nth + 1)) / 2;
    }
}
