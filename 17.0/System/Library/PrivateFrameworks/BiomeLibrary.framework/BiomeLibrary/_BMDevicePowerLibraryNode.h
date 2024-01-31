@interface _BMDevicePowerLibraryNode : _BMLibraryNode

+ (id)EnergyMode;
+ (id)PluggedIn;
+ (id)validKeyPaths;
+ (id)storeConfigurationForPluggedIn;
+ (id)identifier;
+ (id)storeConfigurationForEnergyMode;
+ (id)syncPolicyForLowPowerMode;
+ (id)storeConfigurationForBatteryLevel;
+ (id)storeConfigurationForLowPowerMode;
+ (id)configurationForLowPowerMode;
+ (id)configurationForPluggedIn;
+ (id)sublibraries;
+ (id)streamWithName:(id)a0;
+ (id)streamNames;
+ (id)syncPolicyForEnergyMode;
+ (id)syncPolicyForBatteryLevel;
+ (id)BatteryLevel;
+ (id)LowPowerMode;
+ (id)syncPolicyForPluggedIn;
+ (id)configurationForBatteryLevel;
+ (id)configurationForEnergyMode;

@end
