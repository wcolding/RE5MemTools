#pragma once

#include "BaseClasses.h"

namespace RE5MemTools {

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
        int GetAPLocationId(mItemSet* itemSet);
    };
}