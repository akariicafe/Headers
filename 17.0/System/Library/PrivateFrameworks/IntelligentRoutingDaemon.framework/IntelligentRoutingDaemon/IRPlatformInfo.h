@interface IRPlatformInfo : NSObject

+ (BOOL)isInternalInstall;
+ (BOOL)isRunningInUnitTesting;

@end
