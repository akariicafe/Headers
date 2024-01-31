@class UIColor, NSString, NSDateComponentsFormatter, NSTimer, UIView, FBScene, NSDate;
@protocol SAActivityHosting, SAElementHosting, SAElement, SAUILayoutHosting;

@interface SBPrototypeBasicActivityElementViewProvider : NSObject <SBSystemApertureContextProviding, SAElement, SBSystemApertureSuppressible, SAActivityBehavior, SAUIElementViewProviding, SAUILayoutSpecifying> {
    NSDate *_startTime;
    NSDateComponentsFormatter *_formatter;
    NSTimer *_timer;
}

@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL preventsSwipeToHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (weak, nonatomic) id<SAActivityHosting> activityHost;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;

- (void)_updateLabel;
- (id)init;
- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_activateApplication;
- (BOOL)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)a0 ofBundleId:(id)a1;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasActivityBehavior;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (BOOL)shouldSuppressElementWhilePresentingAppWithBundleId:(id)a0;

@end
