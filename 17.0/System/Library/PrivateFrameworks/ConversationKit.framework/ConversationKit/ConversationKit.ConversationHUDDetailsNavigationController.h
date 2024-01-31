@interface ConversationKit.ConversationHUDDetailsNavigationController : UINavigationController <CNKSceneVisibilityHandler> {
    void /* unknown type, empty encoding */ detailsDelegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ shouldHaveBackgroundMaterial;
    void /* unknown type, empty encoding */ detailsViewController;
}

@property (nonatomic) BOOL isOnScreen;

- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tapDoneButton;

@end
