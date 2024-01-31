@interface LAUtils : NSObject

+ (BOOL)isAppleSilicon;
+ (BOOL)isBiometricOnlyPolicy:(long long)a0;
+ (id)truncateString:(id)a0 maxLength:(long long)a1;
+ (BOOL)callerRunningOnForeground:(id)a0 pid:(int)a1;
+ (BOOL)hasBridge;
+ (BOOL)isApplePayPolicy:(long long)a0 inApp:(BOOL)a1;
+ (BOOL)isDaytona;
+ (BOOL)isSecureBootCapable;
+ (BOOL)isSharedIPad;
+ (BOOL)isGibraltar;
+ (id)auditTokenToData:(struct { unsigned int x0[8]; })a0;
+ (BOOL)isApplePayPolicy:(long long)a0;

@end
