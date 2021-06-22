int middle(int A, int B, int C)
{
    return (A + B + C) - max(A, max(B, C)) - min(A, min(B, C));
}