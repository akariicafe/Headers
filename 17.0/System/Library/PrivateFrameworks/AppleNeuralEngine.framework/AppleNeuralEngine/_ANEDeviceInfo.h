@interface _ANEDeviceInfo : NSObject

+ (id)productName;
+ (id)buildVersion;
+ (unsigned int)numANECores;
+ (long long)aneBoardType;
+ (BOOL)isExcessivePowerDrainWhenIdle;
+ (id)bootArgs;
+ (BOOL)hasANE;
+ (unsigned int)numANEs;
+ (id)aneSubTypeVariant;
+ (id)aneSubType;
+ (BOOL)isInternalBuild;
+ (id)aneSubTypeProductVariant;
+ (BOOL)precompiledModelChecksDisabled;

@end
