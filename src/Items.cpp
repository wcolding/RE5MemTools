#include "Items.h"

namespace RE5MemTools {
	int Item::GetAPLocationId(mItemSet* itemSet) {
		int* intPtr = reinterpret_cast<int*>(itemSet) + 7;
		return *intPtr;
	}
}