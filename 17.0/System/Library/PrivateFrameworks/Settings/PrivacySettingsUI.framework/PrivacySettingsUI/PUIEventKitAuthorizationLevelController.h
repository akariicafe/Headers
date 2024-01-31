@class NSString, NSDictionary, NSBundle;

@interface PUIEventKitAuthorizationLevelController : PSListItemsController {
    NSString *_clientIdentifier;
}

@property (copy, nonatomic) NSString *serviceKey;
@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *entityBundle;

- (void)viewDidLoad;
- (id)specifiers;
- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)_handleUpgradePromptNotification:(id)a0;
- (id)footerStringForSpecifiers:(id)a0;

@end
