#pragma once

#include "RE5BaseClasses.h"

namespace RE5MemTools {

    enum class RE5Item : unsigned short {
        Handgun_M92F              = 0x0102, // 258
        Handgun_P8                = 0x0110, // 272
        Handgun_P226              = 0x0111, // 273
        Handgun_M93R              = 0x011E, // 286
        Handgun_Px4               = 0x011F, // 287
        Handgun_SamuraiEdgeWesker = 0x0129, // 297
        Handgun_SamuraiEdgeBarry  = 0x0112, // 274 (DLC required)
        
        MachineGun_VZ61           = 0x0103, // 259
        MachineGun_556            = 0x0109, // 265
        MachineGun_MP5            = 0x0113, // 275
        MachineGun_AK74           = 0x011D, // 285

        Shotgun_M37               = 0x0104, // 260
        Shotgun_M3                = 0x0116, // 278
        Shotgun_JailBreaker       = 0x0117, // 279
        Shotgun_Hydra             = 0x0119, // 281

        Rifle_S75                 = 0x0105, // 261
        Rifle_PSG1                = 0x011C, // 284
        Rifle_DragunovSVD         = 0x0120, // 288

        Magnum_M29                = 0x010B, // 267
        Magnum_LightningHawk      = 0x011A, // 282
        Magnum_M500               = 0x011B, // 283

        Grenade_Hand              = 0x0106, // 262
        Grenade_Incendiary        = 0x0107, // 263
        Grenade_Flash             = 0x0108, // 264
        ProximityBomb             = 0x010A, // 266

        GrenadeLauncher           = 0x010C, // 268
        RocketLauncher            = 0x010D, // 269
        Longbow                   = 0x010F, // 271
        GatlingGun                = 0x0115, // 277
		Flamethrower              = 0x0121, // 289
		StunRod                   = 0x0122, // 290

		Ammo_Handgun              = 0x0201, // 513
		Ammo_MachineGun           = 0x0202, // 514
		Ammo_Shotgun              = 0x0203, // 515
		Ammo_Rifle                = 0x0204, // 516
		Ammo_Magnum               = 0x0209, // 521
		Ammo_ExplosiveRounds      = 0x0206, // 518
		Ammo_AcidRounds           = 0x0207, // 519
		Ammo_NitrogenRounds       = 0x0208, // 520
		Ammo_FlameRounds          = 0x020E, // 526
		Ammo_FlashRounds          = 0x020F, // 527
		Ammo_ElectricRounds       = 0x0210, // 528

        Egg_Rotten                = 0x0136, // 310
        Egg_White                 = 0x013C, // 316
        Egg_Brown                 = 0x013D, // 317
        Egg_Gold                  = 0x013E, // 318
		Herb_Green                = 0x0301, // 769
		Herb_Red                  = 0x0302, // 770
		FirstAidSpray             = 0x0304, // 772
		Herb_GG                   = 0x0307, // 775
        Herb_GGG                  = 0x0308, // 776
		Herb_GR                   = 0x0309, // 777

        Vest_Melee                = 0x0601, // 1537
		Vest_Bulletproof          = 0x0606, // 1542
		
        SlateMap                  = 0x0607, // 1543
		Key_Furnace = 1283,
		Key_Port = 1286,
		Key_OldBuilding = 1289,
		Key_Guard = 1306,
		Key_Hangar_A = 1287,
		Key_Hangar_B = 1288,
		Key_Tanker_A = 1290,
		Key_Tanker_B = 1303,
		Key_Bridge = 1307,
		Key_Crane = 1302,
		Key_SkyEmblem = 1294,
		Key_EarthEmblem = 1295,
		Key_SeaEmblem = 1296,
		Key_ShamanSlate = 1298,
		Key_WarriorSlate = 1299,
		Key_BeastSlate = 1300,
		Key_RaptorSlate = 1301,
		
		Gold_Large = 1025,
		Gold_Small = 1026,
		Gold_Bars = 1027,
		Treasure_GoldRing = 1047,
		Treasure_DeadBrideNecklace = 1048,
		Treasure_VenomFang = 1049,
		Treasure_AntiqueClock = 1050,
		Treasure_ChaliceSilver = 1051,
		Treasure_ChaliceGold = 1052,
		Treasure_IdolSilver = 1053,
		Treasure_IdolGold = 1054,
		Treasure_CeremonialMask = 1055,
		Treasure_IvoryRelief = 1056,
		Treasure_BeetleBrown = 1057,
		Treasure_JewelBeetle = 1058,
		Treasure_RoyalNecklace = 1059,
		Treasure_JewelBangle = 1060,
		Treasure_BeetleGold = 1061,
		Treasure_TopazPear = 1104,
		Treasure_RubyPear = 1105,
		Treasure_SapphirePear = 1106,
		Treasure_EmeraldPear = 1107,
		Treasure_DiamondPear = 1108,
		Treasure_TopazSquare = 1111,
		Treasure_RubySquare = 1112,
		Treasure_SapphireSquare = 1113,
		Treasure_EmeraldSquare = 1114,
		Treasure_DiamondSquare = 1115,
		Treasure_TopazOval = 1118,
		Treasure_RubyOval = 1119,
		Treasure_SapphireOval = 1120,
		Treasure_EmeraldOval = 1121,
		Treasure_DiamondOval = 1122,
		Treasure_TopazTrilliant = 1125,
		Treasure_RubyTrilliant = 1126,
		Treasure_SapphireTrilliant = 1127,
		Treasure_EmeraldTrilliant = 1128,
		Treasure_DiamondTrilliant = 1129,
		Treasure_PowerStone = 1132,
		Treasure_LionHeart = 1133,
		Treasure_BlueEngima = 1134,
		Treasure_SoulGem = 1135,
		Treasure_HeartOfAfrica = 1136,
		Treasure_TopazMarquise = 1139,
		Treasure_RubyMarquise = 1140,
		Treasure_SapphireMarquise = 1141,
		Treasure_EmeraldMarquise = 1142,
		Treasure_DiamondMarquise = 1143,
		Treasure_TopazBrilliant = 1146,
		Treasure_RubyBrilliant = 1147,
		Treasure_SapphireBrilliant = 1148,
		Treasure_EmeraldBrilliant = 1149,
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

    class mItem {
    public:
        unsigned int id;
        int qty;
        int max;
    private:
        char pad_0C[0x08];
    public:
        unsigned int slot;
    private:
        char pad_18[0x04];
    public:
        unsigned char firepower;
    private:
        char pad_1D;
    public:
        unsigned char reloadSpeed;
    private:
        char pad_1F[0x02];
    public:
        unsigned char critical;
        unsigned char piercing;
        unsigned char spread;
        unsigned char scope;
    private:
        char pad_25[0x03];
        void* unk_28; // Seems to have to do with the "fire" animation
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
