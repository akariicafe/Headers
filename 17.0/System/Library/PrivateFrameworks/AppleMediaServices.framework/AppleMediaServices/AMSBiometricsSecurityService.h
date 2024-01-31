@interface AMSBiometricsSecurityService : NSObject

+ (id)isIdentityMapValid;
+ (id)isAvailableForAccount:(id)a0;
+ (id)saveIdentityMap;
+ (id)verifyDevicePasscode;

@end
