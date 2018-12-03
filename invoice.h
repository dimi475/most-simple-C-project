/* This is structure header file for invoice program */

struct paycards
{
	char *owner_name;
	int doc_number;
	bool validity;
};

struct invoice
{
	char *name_of_product ;
	float price;
	float VAT = 0.23;
	int quantity;
	float price;
	float price_without_VAT;
	float price_with_VAT;
 	struct paycards visa;
 	struct paycards master;
 	struct paycards debit;
};