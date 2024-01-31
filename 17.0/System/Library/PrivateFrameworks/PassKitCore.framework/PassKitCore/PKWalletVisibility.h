@interface PKWalletVisibility : NSObject

+ (id)setOfActiveRestrictionUUIDs;
+ (void)updateWalletVisibility;
+ (BOOL)isWalletVisible;
+ (BOOL)isWalletRestricted;

@end
