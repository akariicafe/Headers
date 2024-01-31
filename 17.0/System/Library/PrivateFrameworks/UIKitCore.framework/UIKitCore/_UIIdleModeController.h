@class UIScreen, UIWindow, UIImageView, NSMapTable;

@interface _UIIdleModeController : NSObject {
    BOOL _didApplyVisualEffects;
    unsigned long long _dismissalTransactionID;
    UIWindow *_backgroundWindow;
    UIImageView *_vignetteView;
    BOOL _keyWindowAllowedGroupBlending;
    UIWindow *_keyWindow;
    NSMapTable *_viewsToCAFilters;
    NSMapTable *_viewsToAttributes;
    NSMapTable *_viewsToOriginalAttributes;
}

@property (nonatomic, getter=isIdleModeEnabled) BOOL idleModeEnabled;
@property (readonly, nonatomic) UIScreen *screen;
@property (nonatomic) unsigned long long style;

- (double)_presentationAnimationDuration;
- (void)dealloc;
- (double)_dismissalAnimationDuration;
- (id)initWithScreen:(id)a0;
- (void).cxx_destruct;
- (void)_animateDismissal;
- (void)_animatePresentation;
- (void)_applyDismissalLayoutAttributesToViews;
- (void)_applyLayoutAttributes:(id)a0 toView:(id)a1;
- (void)_applyPresentationLayoutAttributesToViews;
- (void)_completeDismissal;
- (double)_dimmingOverlayWhiteValueForUserInterfaceStyle:(long long)a0;
- (void)_enterIdleMode;
- (void)_enterIdleModeWithOptions:(unsigned long long)a0;
- (void)_exitIdleMode;
- (void)_exitIdleModeWithOptions:(unsigned long long)a0;
- (id)_imageForTraitCollection:(id)a0;
- (id)_originalAttributesForView:(id)a0 comparedToIdleModeAttributes:(id)a1;
- (void)_postWillEnterNotification;
- (void)_postWillExitNotification;
- (void)_prepareForPresentationWithKeyWindow:(id)a0 focusedView:(id)a1;
- (BOOL)_recordLayoutAttributesStartingAtView:(id)a0;
- (double)_vignetteAlphaForUserInterfaceStyle:(long long)a0;
- (id)_vignetteImageAroundFocusedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
