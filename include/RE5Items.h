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
		Hydra_Shotgun = 281
		L_Hawk_Magnum = 282
		S&W_Magnum = 283
		H&K_PSG1_Rifle = 284
		AK74_MachineGun = 285
		M93R_Handgun = 286
		Px4_Handgun = 287
		Dragunov_SVD_Rifle = 288
		Flamethrower = 289
		Stun_Rod = 290
		SamuraiEdge_Handgun = 297
		Egg_Rotten = 310
		Egg_White = 316
		Egg_Brown = 317
		Egg_Gold = 318
		Ammo_Handgun = 513
		Ammo_Machinegun = 514
		Ammo_Shotgun = 515
		Ammo_Rifle = 516
		Ammo_Magnum = 521
		Ammo_GL_Explosive = 293
		Ammo_GL_Acid = 294
		Ammo_GL_Ice = 295
		Ammo_GL_Flame = 313
		Ammo_GL_Flash = 314
		Ammo_GL_Electric = 315
		Herb_Green = 769
		Herb_Red = 770
		Herb_FirstAid = 772
		Herb_GreenGreen = 775
		Herb_GreenRed = 777
		Vest_Bulletproof = 1542
		Vest_Melee = 1537
		Slate_Map = 1543
		Key_Furnace = 1283
		Key_Port = 1286
		Key_OldBuilding = 1289
		Key_Guard = 1306
		Key_Hangar_A = 1287
		Key_Hangar_B = 1288
		Key_Tanker_A = 1290
		Key_Tanker_B = 1303
		Key_Bridge = 1307
		Key_Crane = 1302
		Key_SkyEmblem = 1294
		Key_EarthEmblem = 1295
		Key_SeaEmblem = 1296
		Key_ShamanSlate = 1298
		Key_WarriorSlate = 1299
		Key_BeastSlate = 1300
		Key_RaptorSlate = 1301
		Gold_Large = 1025
		Gold_Small = 1026
		Gold_Bars = 1027
		Treasure_GoldRing = 1047
		Treasure_DeadBrideNecklace = 1048
		Treasure_VenomFang = 1049
		Treasure_AntiqueClock = 1050
		Treasure_ChaliceSilver = 1051
		Treasure_ChaliceGold = 1052
		Treasure_IdolSilver = 1053
		Treasure_IdolGold = 1054
		Treasure_CeremonialMask = 1055
		Treasure_IvoryRelief = 1056
		Treasure_BeetleBrown = 1057
		Treasure_JewelBeetle = 1058
		Treasure_RoyalNecklace = 1059
		Treasure_JewelBangle = 1060
		Treasure_BeetleGold = 1061
		Treasure_TopazPear = 1104
		Treasure_RubyPear = 1105
		Treasure_SapphirePear = 1106
		Treasure_EmeraldPear = 1107
		Treasure_DiamondPear = 1108
		Treasure_TopazSquare = 1111
		Treasure_RubySquare = 1112
		Treasure_SapphireSquare = 1113
		Treasure_EmeraldSquare = 1114
		Treasure_DiamondSquare = 1115
		Treasure_TopazOval = 1118
		Treasure_RubyOval = 1119
		Treasure_SapphireOval = 1120
		Treasure_EmeraldOval = 1121
		Treasure_DiamondOval = 1122
		Treasure_TopazTrilliant = 1125
		Treasure_RubyTrilliant = 1126
		Treasure_SapphireTrilliant = 1127
		Treasure_EmeraldTrilliant = 1128
		Treasure_DiamondTrilliant = 1129
		Treasure_PowerStone = 1132
		Treasure_LionHeart = 1133
		Treasure_BlueEngima = 1134
		Treasure_SoulGem = 1135
		Treasure_HeartOfAfrica = 1136
		Treasure_TopazMarquise = 1139
		Treasure_RubyMarquise = 1140
		Treasure_SapphireMarquise = 1141
		Treasure_EmeraldMarquise = 1142
		Treasure_DiamondMarquise = 1143
		Treasure_TopazBrilliant = 1146
		Treasure_RubyBrilliant = 1147
		Treasure_SapphireBrilliant = 1148
		Treasure_EmeraldBrilliant = 1149
		Treasure_DiamondBrilliant = 1150
    };

    inline bool operator==(RE5Item a, unsigned short b) {
        return static_cast<unsigned short>(a) == b;
    }

    enum class RE5SetType : unsigned short {
        Spawn = 0,
        EnemyDrop = 1,
        Chest = 2,
        Breakable = 2,
        Suitcase = 3,
        NoPickup = 4
    };

    inline bool operator==(RE5SetType a, unsigned short b) {
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
        char pad_2C[0x04];
    public:
        bool AutoPosition;
    private:
        char pad_31[0x07];
    public:
        bool HitAuto;
    private:
        char pad_39[0x07];
    public:
        bool NoCheckOba;
    private:
        char pad_41[0x07];
    public:
        bool NoCheckEff;
    private:
        char pad_49[0x07];
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
        RE5SetType SetType;
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
