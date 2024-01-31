@interface SHSDualSIMListController : PSListController

@property (nonatomic) long long alertType;
@property (nonatomic) BOOL hasDifferentTones;

- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void)reloadSpecifiers;
- (id)detailTextForToneWithSpecifier:(id)a0;
- (void)updateDifferentTonesState;

@end
