public class Problem02 {
    public static void main(String[] args) {
        int a = 1;
        int b = 2;
        int c = 0;
        int temp;

        while (b < 4_000_000) {
            if (b % 2 == 0) {
                c += b;
            }

            temp = a;
            a = b;
            b += temp;
        }

        System.out.println(c);
    }
}
