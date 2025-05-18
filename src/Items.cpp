#include "Items.h"

namespace RE5MemTools {
    int Item::GetAPLocationId(mItemSet* itemSet) {
        int* intPtr = reinterpret_cast<int*>(itemSet) + 7;
        return *intPtr;
    }

    void Item::SetItem(mItemSet* itemSet, RE5Item item, short qty) {
        itemSet->ItemId = static_cast<unsigned short>(item);
        itemSet->ItemNum = qty;
    }
}