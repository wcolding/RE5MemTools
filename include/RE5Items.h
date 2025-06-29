#pragma once

#include "RE5BaseClasses.h"

namespace RE5MemTools {

    enum class RE5Item : unsigned short {
        M92F_Handgun = 258,
        VZ61_SMG = 259,
        IthicaM37_Shotgun = 260,
        S75_Rifle = 261,
        HandGrenade = 262,
        IncendiaryGrenade = 263,
        FlashGrenade = 264,
        SIG556_MachineGun = 265,
        ProximityBomb = 266,
        M29_Magnum = 267,
        RocketLauncher = 269,
        Longbow = 271,
        P8_Handgun = 272,
        SIGP226_Handgun = 273,
        SamuraiEdge_Handgun = 274,
        MP5_SMG = 275,
        GatlingGun = 277,
        M3_Shotgun = 278,
        JailBreaker_Shotgun = 279
    };

    inline bool operator==(RE5Item a, unsigned short b) {
        return static_cast<unsigned short>(a) == b;
    }

#pragma pack(push)
#pragma pack(1)
    class mItemSet {

    private:
        void* vTable;
        char pad_04[0x0C];
    public:
        Vector3 mPosition;
    private:
        char pad_1C[0x04];
    public:
        Vector3 mAngle;
    private:
        char pad_2C[0x24];
    public:
        unsigned char EffType;
    private:
        char pad_51[0x0F];
    public:
        Vector3 EffOffset;
    private:
        char pad_6C[0x08];
    public:
        short ItemFlagNo;
        unsigned short ItemId;
        short ItemNum;
    private:
        char pad_7A[0x02];
    public:
        unsigned short SetType;
        short SetLotNo;
        short SetNo;
    private:
        char pad_82[0x0A];
    public:
        unsigned char LevelPower;
        unsigned char LevelFireSpeed;
        unsigned char LevelReloadSpeed;
        unsigned char LevelBulletMax;
        unsigned char LevelBulrRate;
        unsigned char LevelCritical;
        unsigned char LevelThrough;
        unsigned char LevelRange;
        unsigned char LevelScope;
    private:
        char pad_95[0x4F];
    public:
        RE5Shape Shape;
    };

    class mpInfo {

    private:
        void* vTable;
    public:
        char* mName;
        char* mParentName;
        int mParentNo;
    private:
        char pad_10[0x10];
    public:
        Vector3 mPosition;
    private:
        char pad_2C[0x04];
    public:
        Vector3 mAngle;
    private:
        char pad_3C[0x04];
    public:
        Vector3 mScale;
    private:
        char pad_4C[0x04];
    public:
        unsigned int mOrder;
    private:
        char pad_54[0x0C];
    public:
        unsigned int PatternNo;
        unsigned int mLife;
        unsigned int mJumpInit;
    private:
        char pad_6C[0x04];
    public:
        RE5MemTools::mItemSet mItemSet;
    };

#pragma pack(pop)

    namespace Item {
        /**
         * @brief Acquires a stamped Archipelago location ID from an mItemSet.
         * This relies on a patch forcing the game to stamp the ID to the padding at 0x1C, right after the mPosition vector.
         *
         * @param  itemSet:  pointer of the mItemSet
         *
         * @return int
         */
        int GetAPLocationId(mItemSet* itemSet);
        
        /**
         * @brief Modifies an item id and quantity for an mItemSet.
         * This should be used upon receiving slot data from Archipelago for a particular check.
         *
         * @param  itemSet:  pointer of the mItemSet to modify
         * @param  item:  RE5Item type to set
         * @param  qty:  quantity to set
         *
         * @return void
         */
        void SetItem(mItemSet* itemSet, RE5Item item, short qty = -1);
    };
}