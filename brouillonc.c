int	main(void)
{
	int *a;
	int *b;
	int c;
	int d;

	c = 2;
	d = 3;
	a = &c;
	b = &d;
	printf("%d | %d\n", c, d);
	swap(a, b);
	printf("%d | %d", c, d);
	return (0);
}
