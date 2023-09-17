int mx_factorial_iter(int n)
{
    if (0 > n || 12 < n)
    {
        return 0;
    }

    int result = 1;
    for (int i = n; i > 1; i--) {
        result *= i;
    }

    return result;
}
