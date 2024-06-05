
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