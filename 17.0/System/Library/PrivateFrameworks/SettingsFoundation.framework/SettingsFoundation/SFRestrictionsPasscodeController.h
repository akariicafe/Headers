@interface SFRestrictionsPasscodeController : NSObject

+ (BOOL)settingEnabled;
+ (void)setPIN:(id)a0;
+ (BOOL)hasHashAndSaltLegacyPassword;
+ (void)_removeKeychainPasswordForRestrictions;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (id)_keychainPasswordForRestrictions;
+ (id)_generateSalt;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (BOOL)legacyRestrictionsInEffect;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (void)migrateRestrictionsPasscode;
+ (void)_setKeychainPasswordForRestrictions:(id)a0;
+ (id)newHashDataForPassword:(id)a0 andSalt:(id)a1;
+ (BOOL)validatePIN:(id)a0;
+ (id)pinFromHashAndSaltLegacyPassword;

@end
