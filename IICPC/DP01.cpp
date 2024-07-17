// Recursion 

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    else {
        return n * factorial(n-1);
    }
}

// C(n, r) = C(n-1, r-1) + C(n-1,r) // N choose r.

/*
Key Properties for DP:-
-> Optimal Substructure (Only needs Optimal Value merges)
-> Overlapping Subproblems (Needs to have repeated States)
*/

// Simple Knapsack Problem
/* N items with Weight W_i each and profit P_i each. Choose subset with maximum profit and combined weight =< W.*/


// Our Problem
/*
Sum of weights <= W
No. of chosen objects <= K
Maximize Profit
*/

// Decide if each item belongs to final subset as optimal subset has weight <= W.
/* Optimal Substructure:
Case 1: Item i with weight W_i belongs to optimal subset.
Case 2: Item does not belong to optimal subset.

which gives 2 cases for programming
c1) P_i + Optimal Profit for remaining with weight W-W_i(N_-i, W-W_i)
c2) Optimal Profit fo remainig with Weight W (N_-i, W_i)
*/

int n, W, K;
int weights[1001], profits[1001]; // Assuming n <= 1000
int dp[101][1001][101]; // This is what reduces time complexity
// 1 <= K <= N

// Pure Recursion, O(2^N)
int rec(int i, int w_taken, int k_taken) {
    // Pruning : Aka get rid of impossible states
    // basecase
    if (i==n) {
        return 0;
    }
    // Cache check (DP) -> Reduces time complexity from O(2^N) to O(N*W*K)
    if (dp[i][w_taken][k_taken] != -1) {
        return dp[i][w_taken][k_taken];
    }

    int max_sum = rec(i+1, w_taken, k_taken);

    if ((w_taken <= W-w_taken) && (k_taken <= K)) { // Check if possible to take
        // Check both transitions
        max_sum = max(max_sum, profits[i] + rec(i+1, w_taken+weights[i], k_taken+1));
    }

    // Save
    dp[i][w_taken][k_taken] = max_sum;
    // Return
    return max_sum;
}

int main() {
    cin >> n >> W >> K;
    int weights[n], profits[n];
    for (int i = 0 ; i < n; i++) {
        cin >> weights[i];
    }
    for (int i = 0 ; i < n; i++) {
        cin >> profits[i];
    }
    memset(dp, -1, sizeof(dp));

    cout << rec(0, 0, 0) << endl;
}

/* // How to think about problems
1) Check if problem requires a subarray or subsequence or subset
2) Optimization to find best way or Counting the number of ways
*/

/* // Framework
Step 1) Recognize Problem
Step 2) Design Recurrence/DP/States
Dp(i, W_taken, k_taken) -> Return
i - Take or not ith item
Return -> Maximum sum of profits from [i,...,N] / Aka asked answer
W_taken, K_taken -> Arguments/States necessary for decisions / Constraints
Step 3) Design Transition
DP(i, W_taken, K_taken) has 2 transition options:-
if i is taken -> DP(i+1, W_taken + W[i], K_taken + 1)
if i is not taken -> DP(i+1, W_taken, K_Taken)
Then Merge solutions Ex: Max(taken, not taken)
Step 4) TL check : Time Complexity.
time = O(no. of states(#s) * (1 + avg. no of transitions(#t)))
Here, #s = N*W*K
#t = 2 (take/not take) => O(N*W*K)
*/