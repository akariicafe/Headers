@class UIColor, NSString, NSArray, UIAction;

@interface NCNotificationListSupplementaryViewConfiguration : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *groupingIdentifier;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, copy, nonatomic) UIAction *defaultAction;
@property (readonly, copy, nonatomic) NSArray *supplementaryActions;
@property (readonly, copy, nonatomic) NSString *auxiliaryOptionsSummaryText;
@property (readonly, copy, nonatomic) NSArray *auxiliaryOptionActions;
@property (readonly, copy, nonatomic) UIColor *tintColor;
@property (readonly, copy, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) long long materialRecipe;
@property (readonly, nonatomic) BOOL containsUnmanagedContent;
@property (readonly, nonatomic) BOOL preventsUserDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)_initWithGroupingIdentifier:(id)a0 groupName:(id)a1 defaultAction:(id)a2 supplementaryActions:(id)a3 auxiliaryOptionsSummaryText:(id)a4 auxiliaryOptionActions:(id)a5 tintColor:(id)a6 textColor:(id)a7 materialRecipe:(long long)a8 containsUnmanagedContent:(BOOL)a9 preventsUserDismissal:(BOOL)a10;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
