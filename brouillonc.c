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
	printf("%d | %d", c, d);
	swap(a, b);
	return (0);
}
