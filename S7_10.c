int main(void) {
	int a;
	scanf("%d",&a);
	int q=1;
	while(q<a)
	{
		q<<=1;
	}
	printf("%d",q);
	return 0;
}