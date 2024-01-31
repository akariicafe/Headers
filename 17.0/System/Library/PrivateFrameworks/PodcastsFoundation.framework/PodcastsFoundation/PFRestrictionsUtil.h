@interface PFRestrictionsUtil : NSObject

+ (void)reloadSettings;
+ (BOOL)isExplicitContentAllowed;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (void)setAllowExplicitContent;
+ (BOOL)_fetchIsExplicitContentAllowed;
+ (BOOL)isRestrictedByAdministrator;
+ (BOOL)mustResolveInScreenTimePreferences;

@end
