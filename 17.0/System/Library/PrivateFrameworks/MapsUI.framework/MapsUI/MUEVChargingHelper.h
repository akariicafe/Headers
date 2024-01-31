@interface MUEVChargingHelper : NSObject

+ (id)evPlugIconWithConfiguration:(id)a0;
+ (id)getRealTimeEVChargerInfo:(id)a0 charger:(id)a1;
+ (id)localizedStringForAvailableChargers:(unsigned long long)a0 outOfTotal:(unsigned long long)a1;
+ (id)localizedStringForAvailableChargers:(unsigned long long)a0 outOfTotal:(unsigned long long)a1 radiowavesSymbolScale:(long long)a2;

@end
