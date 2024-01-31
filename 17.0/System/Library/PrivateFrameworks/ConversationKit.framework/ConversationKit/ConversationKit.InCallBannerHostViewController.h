@interface ConversationKit.InCallBannerHostViewController : UIViewController {
    void /* unknown type, empty encoding */ inCallBannerDelegate;
    void /* unknown type, empty encoding */ controlsManager;
    void /* unknown type, empty encoding */ controlsType;
    void /* unknown type, empty encoding */ notice;
    void /* unknown type, empty encoding */ captureGroupName;
    void /* unknown type, empty encoding */ recipeFactory;
    void /* unknown type, empty encoding */ features;
    void /* unknown type, empty encoding */ conversationControlsViewController;
    void /* unknown type, empty encoding */ isDismissed;
    void /* unknown type, empty encoding */ needsMenuContainerView;
    void /* unknown type, empty encoding */ requiresControlsHidden;
}

@property (nonatomic, readonly) BOOL menuPresented;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;

@end
