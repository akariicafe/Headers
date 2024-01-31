@interface SDProfileUtilities : NSObject

+ (void)forceRemoveSeedingProfile;
+ (id)getAssetAudienceIDForInstalledProfile:(id *)a0;
+ (id)getInstalledSeedProfile;
+ (void)installProfileWithData:(id)a0 error:(id *)a1;
+ (BOOL)isProfileInstallationAllowed;
+ (void)removeSeedProfileIfRestricted;
+ (BOOL)removeSeedingProfile;

@end
