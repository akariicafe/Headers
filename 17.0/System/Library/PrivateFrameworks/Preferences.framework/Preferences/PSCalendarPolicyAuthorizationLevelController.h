@class NSString;

@interface PSCalendarPolicyAuthorizationLevelController : PSListItemsController {
    NSString *_clientIdentifier;
}

@property (copy, nonatomic) NSString *serviceKey;
@property (copy, nonatomic) NSString *displayName;

+ (long long)cellStyle;

- (void)viewDidLoad;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)_handleUpgradePromptNotification:(id)a0;
- (id)footerStringForSpecifiers:(id)a0;

@end
