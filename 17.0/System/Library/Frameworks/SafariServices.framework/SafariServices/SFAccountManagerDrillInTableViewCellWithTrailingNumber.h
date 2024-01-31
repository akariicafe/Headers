@interface SFAccountManagerDrillInTableViewCellWithTrailingNumber : UITableViewCell

+ (id)_numberFormatter;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureForRecentlyDeletedWithNumberOfRecentlyDeletedAccounts:(unsigned long long)a0;
- (void)configureCellWithGroup:(id)a0 numberOfSavedAccounts:(unsigned long long)a1;
- (void)configureForSecurityRecommendationsWithNumberOfRecommendations:(unsigned long long)a0 subtitleText:(id)a1 warningStyle:(long long)a2;
- (void)configureGroupInvitationsDrillInWithNumberOfInvitations:(unsigned long long)a0;

@end
