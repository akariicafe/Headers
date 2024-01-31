@interface SSRestrictions : NSObject

+ (void)isRestrictionsPasscodeSet:(id /* block */)a0;
+ (id)setOfActiveRestrictionUUIDs;
+ (BOOL)_calculateIsRestrictionsPasscodeSet;
+ (BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+ (BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+ (void)didDisplayExplicitRestrictionAlertOfType:(long long)a0;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (void)isExplicitContentDisallowedInCurrentStoreFront:(id /* block */)a0;
+ (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id /* block */)a0;
+ (void)setAllowExplicitContent;
+ (void)shouldDisplayExplicitRestrictionAlertOfType:(long long)a0 completionBlock:(id /* block */)a1;

@end
