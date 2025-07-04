public class Problem14 {
    public static void main(String[] args) {
        int maxLen = 0;
        int ans = 0;

        for (int i = 1; i <= 1_000_000; ++i) {
            long j = i;
            int chainLen = 1;

            while (j != 1) {
                if (j % 2 == 0) {
                    j /= 2;
                    chainLen += 1;
                } else {
                    j = 3 * j + 1;
                    chainLen += 1;
                }
            }

            if (chainLen > maxLen) {
                maxLen = chainLen;
                ans = i;
            }
        }

        System.out.println(ans);
    }
}
