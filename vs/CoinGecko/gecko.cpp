#include "gecko.h"

bool gecko::api::ping() {
	cpr::Response r = this->request("ping", NULL);
	if (r.status_code == 200) {
		return true;
	}
	return false; // implicit else - won't reach unless != 200
}