#pragma once

namespace RE5MemTools {

#pragma pack(push)
#pragma pack(1)
    struct Vector3 {
        float x;
        float y;
        float z;
    };

    class RE5String {
    private:
        int unk_00;
    public:
        unsigned int length;
        char string[32];
    };

    class RE5Cone {
    public:
        Vector3 mCenterPos;
    private:
        char unk_0C[4];
    public:
        float mHeight;
        float mTopRadius;
        float mBottomRadius;
    };

    class RE5Shape {
    public:
        float CheckAngle;
        float CheckRange;
        float CheckToward;
        bool AngleFlag;
        bool TowardFlag;
    private:
        char unk_0E[2];
    public:
        RE5String* Name;
    private:
        char unk_14[8];
    public:
        RE5Cone Cone;
    };

#pragma pack(pop)
}