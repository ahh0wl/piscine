#include "ft_stock.h"

int main()
{
	char *a[] = {"test", "number", "unos"};
	t_stock_str *result = ft_strs_to_tab(3, a);
	ft_show_tab(result);
	return 0;
}
