@interface _DPDeviceInfo : NSObject

+ (id)osVersion;
+ (BOOL)isDataCollectionEnabled;
+ (BOOL)isRunningUnitTests;
+ (BOOL)isDisabledByTaskingForDedisco;
+ (BOOL)isInternalBuild;
+ (BOOL)isDisabledByTaskingForTransport:(unsigned long long)a0;
+ (BOOL)isDisabledByTaskingForPrio;
+ (BOOL)isDisabledByTaskingForCrashCopier;

@end
