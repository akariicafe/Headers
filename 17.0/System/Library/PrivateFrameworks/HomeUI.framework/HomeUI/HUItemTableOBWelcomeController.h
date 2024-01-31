@class HUItemTableViewController, NSString, NSLayoutConstraint;

@interface HUItemTableOBWelcomeController : OBWelcomeController <HUPreloadableViewController>

@property (retain, nonatomic) HUItemTableViewController *itemTableViewController;
@property (retain, nonatomic) NSLayoutConstraint *itemTableViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3 itemTableViewController:(id)a4;

@end
