class CfgPatches {
	class MissileWarningFix {
		requiredVersion = 1.02;
		requiredAddons[] = {
			"CAAIR",
			"CAA10",
			"CAAIR_E",
			"CAAIR2"
		};
		version = 1.6;
		author = "nitro404";
	};
};
class CfgVehicles {
	class Air;
	class Plane;
	class Helicopter;
	class AH1_Base : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class AH64D : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class Mi17_base : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class Mi24_Base : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class Kamov_Base : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class Ka60_Base_PMC : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class CH47_base_EP1 : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class UH60_Base : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class UH60M_base_EP1: UH60_Base {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class UH60M_US_base_EP1: UH60M_base_EP1 {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class AH6 : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class AH6_Base_EP1 : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class UH1_Base : Helicopter {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class MV22 : Plane {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class C130J : Plane {
		incommingMisslieDetectionSystem = 16;
		lockDetectionSystem = "8 + 4";
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class A10 : Plane {
		incommingMisslieDetectionSystem = 16;
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class AV8B2 : Plane {
		incommingMisslieDetectionSystem = 16;
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class F35_base : Plane {
		incommingMisslieDetectionSystem = 16;
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class L39_base : Plane {
		incommingMisslieDetectionSystem = 16;
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class Su25_base : Plane {
		incommingMisslieDetectionSystem = 16;
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
	class Su34 : Plane {
		incommingMisslieDetectionSystem = 16;
		soundLocked[] =           { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 2 };
		soundIncommingMissile[] = { "\ca\Tracked\Data\Sound\alarm_loop1", 0.00031599999, 4 };
	};
};
