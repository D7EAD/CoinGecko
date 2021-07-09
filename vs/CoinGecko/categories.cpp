#include "categories.h"

gecko::web::response gecko::categoriesFunctions::getCategories() {
	cpr::Response r = this->request("coins/categories/list", NULL);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}

gecko::web::response gecko::categoriesFunctions::getCategoryMarketData(OPTIONAL std::string order) {
	cpr::Parameters p = gecko::web::buildParameters(
		gecko::web::__buildStringParameters(
			Strings {
				{"order", order}
			}
		),
		NULL,
		NULL,
		NULL
	);

	cpr::Response r = this->request("coins/categories", &p);
	return {
		{r.text},
		{std::to_string(r.status_code)},
		{r.url.str()},
		{r}
	};
}