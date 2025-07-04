public class Problem09 {
    public static void main(String[] args) {
        int result = 0;

        outerLoop:
        for (int i = 1; i < 998; ++i) {
            for (int j = 1; j < 998; ++j) {
                for (int k = 1; k < 998; ++k) {
                    if (i + j + k == 1000 && (i * i) + (j * j) == k * k) {
                        result = i * j * k;
                        break outerLoop;
                    }
                }
            }
        }

        System.out.println(result);
    }
}
