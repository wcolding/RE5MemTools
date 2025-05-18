#pragma once

#include "BaseClasses.h";

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
        unsigned __int8 EffType;
    private:
        char pad_51[0x0F];
    public:
        Vector3 EffOffset;
    private:
        char pad_6C[0x08];
    public:
        __int16 ItemFlagNo;
        unsigned __int16 ItemId;
        __int16 ItemNum;
    private:
        char pad_7A[0x02];
    public:
        unsigned __int16 SetType;
        __int16 SetLotNo;
        __int16 SetNo;
    private:
        char pad_82[0x0A];
    public:
        unsigned __int8 LevelPower;
        unsigned __int8 LevelFireSpeed;
        unsigned __int8 LevelReloadSpeed;
        unsigned __int8 LevelBulletMax;
        unsigned __int8 LevelBulrRate;
        unsigned __int8 LevelCritical;
        unsigned __int8 LevelThrough;
        unsigned __int8 LevelRange;
        unsigned __int8 LevelScope;
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
        mItemSet mItemSet;
    };

#pragma pack(pop)

    namespace Item {
        int GetAPLocationId(mItemSet* itemSet);
    };
}