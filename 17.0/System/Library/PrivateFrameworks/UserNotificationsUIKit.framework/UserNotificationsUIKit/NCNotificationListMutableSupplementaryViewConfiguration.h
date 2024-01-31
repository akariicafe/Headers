@class UIColor, NSString, NSArray, UIAction;

@interface NCNotificationListMutableSupplementaryViewConfiguration : NCNotificationListSupplementaryViewConfiguration

@property (copy, nonatomic) NSString *groupingIdentifier;
@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) UIAction *defaultAction;
@property (copy, nonatomic) NSArray *supplementaryActions;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (copy, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) long long materialRecipe;
@property (nonatomic) BOOL containsUnmanagedContent;
@property (nonatomic) BOOL preventsUserDismissal;

- (void)setDefaultAction:(id)a0;
- (void)setAuxiliaryOptionActions:(id)a0;
- (void)setMaterialRecipe:(long long)a0;
- (void)setTintColor:(id)a0;
- (void)setAuxiliaryOptionsSummaryText:(id)a0;
- (void)setGroupingIdentifier:(id)a0;
- (void)setPreventsUserDismissal:(BOOL)a0;
- (void)setTextColor:(id)a0;
- (void)setContainsUnmanagedContent:(BOOL)a0;
- (void)setGroupName:(id)a0;
- (void)setSupplementaryActions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
