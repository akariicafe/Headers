@class UIColor, NSString, PXBarAnimationOptions, UIViewController;
@protocol PXBarAppearanceImplementationDelegate;

@interface PXBarAppearance : PXObservable <PXMutableBarAppearance, PXChangeObserver> {
    struct { BOOL respondsToWillUpdateBarAppearanceOnViewWillAppear; BOOL respondsToIsStatusBarVisible; } _implementationDelegateFlags;
    long long _transitionsCounter;
}

@property (weak, nonatomic, setter=_setImplementationDelegate:) id<PXBarAppearanceImplementationDelegate> _implementationDelegate;
@property (copy, nonatomic, setter=_setAnimationOptions:) PXBarAnimationOptions *_animationOptions;
@property (nonatomic, setter=_setPreferredStatusBarUpdateAnimation:) long long _preferredStatusBarUpdateAnimation;
@property (nonatomic) BOOL prefersViewIsAppearingForAppearanceUpdates;
@property (readonly, weak, nonatomic) UIViewController *viewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<PXBarAppearanceImplementationDelegate> implementationDelegate;
@property (readonly, nonatomic) BOOL prefersStatusBarVisible;
@property (readonly, nonatomic) long long barAppearancePreferredStatusBarStyle;
@property (readonly, nonatomic) BOOL prefersNavigationBarVisible;
@property (readonly, nonatomic) BOOL prefersToolbarVisible;
@property (readonly, nonatomic) BOOL prefersTabBarVisible;
@property (readonly, copy, nonatomic) UIColor *navigationBarTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedDefaultImplementationDelegate;

- (void)_update;
- (void)performChanges:(id /* block */)a0;
- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithViewController:(id)a0;
- (id)mutableChangeObject;
- (void)setNavigationBarTintColor:(id)a0;
- (void).cxx_destruct;
- (BOOL)adjustedPrefersStatusBarHidden:(BOOL)a0;
- (void)setPrefersNavigationBarVisible:(BOOL)a0;
- (void)viewControllerViewDidDisappear:(BOOL)a0;
- (void)_performBarsTransition:(id /* block */)a0;
- (void)_setNavigationBarTintColor:(id)a0 withAnimationOptions:(id)a1;
- (void)_setNavigationBarVisible:(BOOL)a0 withAnimationOptions:(id)a1;
- (void)_setTabBarVisible:(BOOL)a0 withAnimationOptions:(id)a1;
- (void)_setToolbarVisible:(BOOL)a0 withAnimationOptions:(id)a1;
- (void)_updateImplementationDelegate;
- (void)_updateOnViewAppearance:(BOOL)a0;
- (void)_updateOnViewWillAppear:(BOOL)a0;
- (void)_updateStatusBarStyleAndVisibilityWithAnimationOptions:(id)a0;
- (void)_updateWithAnimationOptions:(id)a0 isStatusBarHidden:(BOOL)a1;
- (long long)adjustedPreferredStatusBarStyle:(long long)a0;
- (long long)adjustedPreferredStatusBarUpdateAnimation:(long long)a0;
- (void)performChangesWithAnimationOptions:(id)a0 changes:(id /* block */)a1;
- (void)setBarAppearancePreferredStatusBarStyle:(long long)a0;
- (void)setPrefersStatusBarVisible:(BOOL)a0;
- (void)setPrefersTabBarVisible:(BOOL)a0;
- (void)setPrefersToolbarVisible:(BOOL)a0;
- (void)viewControllerViewIsAppearing:(BOOL)a0;
- (void)viewControllerViewWillAppear:(BOOL)a0;

@end
