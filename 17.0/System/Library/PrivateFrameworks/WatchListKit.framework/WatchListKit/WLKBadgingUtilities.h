@interface WLKBadgingUtilities : NSObject

+ (BOOL)addBadgeIdentifier:(id)a0;
+ (id)badgeIdentifiers;
+ (void)clearSavedBadgeIdentifiers;
+ (id)currentBadgeNumber;
+ (BOOL)removeBadgeIdentifier:(id)a0;
+ (BOOL)hasMigrated;
+ (id)sharedUtilities;

- (id)_notificationCenter;
- (void)migrateToNewBadgingSystemIfNeeded;

@end
