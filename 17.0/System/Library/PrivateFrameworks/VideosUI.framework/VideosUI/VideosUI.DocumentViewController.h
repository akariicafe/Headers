@class NSArray, UIViewController;
@protocol UIActivityItemsConfigurationReading;

@interface VideosUI.DocumentViewController : VideosUI.VUIViewController <UINavigationControllerDelegate, AMSUIMessageViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ viewWillAppearAfterTabSwitch;
    void /* unknown type, empty encoding */ templateViewController;
    void /* unknown type, empty encoding */ deferLoadingTemplateController;
    void /* unknown type, empty encoding */ bubbletipOverlayController;
    void /* unknown type, empty encoding */ documentDelegate;
    void /* unknown type, empty encoding */ ignoreDidMoveToNilParent;
    void /* unknown type, empty encoding */ rebaseIdentifier;
    void /* unknown type, empty encoding */ isInTabBarMode;
    void /* unknown type, empty encoding */ isTabBarChild;
    void /* unknown type, empty encoding */ loadingViewManager;
    void /* unknown type, empty encoding */ documentDidSetHandler;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ isTransitioning;
    void /* unknown type, empty encoding */ navBarOpacity;
    void /* unknown type, empty encoding */ navBarTitleOpacity;
    void /* unknown type, empty encoding */ navBarTintColor;
    void /* unknown type, empty encoding */ navBarPrefersLargeTitles;
    void /* unknown type, empty encoding */ navBarTitleView;
    void /* unknown type, empty encoding */ navBarTitle;
    void /* unknown type, empty encoding */ navBarCachedWidth;
    void /* unknown type, empty encoding */ needsConfigurationWhenMovesToParent;
    void /* unknown type, empty encoding */ viewWillAppearButNotDidAppear;
}

@property (nonatomic, retain) id<UIActivityItemsConfigurationReading> activityItemsConfiguration;
@property (nonatomic, readonly) long long preferredStatusBarStyle;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL vuiShouldAutomaticallyForwardAppearanceMethods;

- (void)messageViewController:(id)a0 didSelectActionWithDialogResult:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void)messageViewController:(id)a0 enqueueEventWithFields:(id)a1 inTopic:(id)a2;
- (void)messageViewController:(id)a0 didFailWithError:(id)a1;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)messageViewController:(id)a0 didUpdateSize:(struct CGSize { double x0; double x1; })a1;
- (void)playbackUIChanged:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)willResignActive:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)willTerminate:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_viewWillDisappear:(BOOL)a0;
- (id)customAnimatorForNavigationControllerOperation:(long long)a0 fromViewController:(id)a1;
- (id)customAnimatorForNavigationControllerOperation:(long long)a0 toViewController:(id)a1;
- (void)scrollToTopWithAnimated:(BOOL)a0 needsFocusUpdate:(BOOL)a1;

@end
