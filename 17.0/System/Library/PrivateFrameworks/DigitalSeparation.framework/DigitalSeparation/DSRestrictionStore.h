@interface DSRestrictionStore : NSObject

+ (void)initialize;
+ (BOOL)hasRestriction;
+ (BOOL)isFingerprintModificationRestricted;
+ (BOOL)isAppRemovalRestricted;
+ (BOOL)isPasscodeModificationRestricted;
+ (BOOL)isPermissionRestricted:(id)a0;
+ (BOOL)isPrivateRelayRestricted;
+ (BOOL)isSourceRestricted:(id)a0;

@end
