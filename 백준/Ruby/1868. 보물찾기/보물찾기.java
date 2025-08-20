import java.io.*;
import java.util.*;

public class Main {
    static BufferedReader br;
    static BufferedWriter bw;
    static StringTokenizer st;
    static int N, a, b, res;
    static ArrayList<Integer>[] tree;

    public static void main(String[] args) throws Exception {
        new Main().solution();
    }

    public void solution() throws Exception {
        br = new BufferedReader(new InputStreamReader(System.in));
        bw = new BufferedWriter(new OutputStreamWriter(System.out));

        N = Integer.parseInt(br.readLine());
        tree = new ArrayList[N + 1];
        for (int i = 1; i <= N; i++) {
            tree[i] = new ArrayList<>();
        }

        for (int i = 0; i < N - 1; i++) {
            st = new StringTokenizer(br.readLine());
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());

            tree[a].add(b);
            tree[b].add(a);
        }

        res = dfs(1, 0);  // 1번 방부터 탐색 시작

        // res: 비트마스크, 최상위 비트 위치 = 질문 횟수
        bw.write(String.valueOf(31 - Integer.numberOfLeadingZeros(res)));
        bw.flush();
        bw.close();
        br.close();
    }

    private int dfs(int curr, int parent) {
        int currBitMask = 0;
        int maxHeight = 0;

        for (int child : tree[curr]) {
            if (child == parent) continue;

            int childBitMask = dfs(child, curr);

            if ((childBitMask & currBitMask) != 0) {
                maxHeight = Math.max(maxHeight, 31 - Integer.numberOfLeadingZeros(childBitMask & currBitMask));
            }

            currBitMask |= childBitMask;
        }

        currBitMask += 1 << maxHeight;

        if (maxHeight > 0) {
            currBitMask >>= maxHeight;
            currBitMask <<= maxHeight;
        }

        return currBitMask;
    }
}
