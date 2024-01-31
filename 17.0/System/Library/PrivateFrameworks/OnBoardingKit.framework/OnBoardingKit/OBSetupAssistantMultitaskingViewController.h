@interface OBSetupAssistantMultitaskingViewController : OBWelcomeController

- (id)init;
- (void)viewDidLoad;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (double)_headerTopOffset;
- (void)addMultitaskingBulletedListItemWithTitle:(id)a0 description:(id)a1 symbolName:(id)a2;
- (double)contentViewsTopPaddingFromBottomOfHeader;
- (void)setupBulletedListIfNeeded;

@end
