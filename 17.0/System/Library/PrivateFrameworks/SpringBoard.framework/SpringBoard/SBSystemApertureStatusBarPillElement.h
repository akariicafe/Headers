@class UIColor, NSString, NSSet, UIView, FBScene;
@protocol SAActivityHosting, SAElementHosting, SAElement, SAUILayoutHosting;

@interface SBSystemApertureStatusBarPillElement : NSObject <SBSystemApertureContextProviding, SAUILayoutSpecifying, SAElement, SBSystemApertureSuppressible, SBSystemApertureBackgroundActivitiesRepresenting, SAActivityBehavior, SAUIElementViewProviding> {
    NSString *_representedBackgroundActivityIdentifier;
}

@property (readonly, nonatomic) NSString *activeSymbolName;
@property (readonly, nonatomic) UIColor *activeTintColor;
@property (copy, nonatomic) NSSet *associatedApplications;
@property (retain, nonatomic) id clientStorage;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL preventsSwipeToHide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, copy, nonatomic) NSSet *representedBackgroundActivityIdentifiers;
@property (weak, nonatomic) id<SAActivityHosting> activityHost;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (nonatomic) unsigned long long layoutAxis;

+ (id)backgroundActivityIdentifiersThatIgnoreSystemChromeSuppression;

- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_textLabel;
- (id)_accessibilityLabel;
- (id)_imageName;
- (id)initWithBackgroundActivityIdentifier:(id)a0;
- (id)_packageName;
- (BOOL)_isAssociatedWithApplicationWithBundleIdentifier:(id)a0;
- (unsigned long long)_representedStatusBarStyleOverrides;
- (id)_representedVisualDescriptor;
- (struct CGSize { double x0; double x1; })_sizeForPillWithImageName;
- (id)_viewWithImageName:(id)a0 systemApertureSize:(struct CGSize { double x0; double x1; })a1 tintColor:(id)a2;
- (id)_viewWithPackageName:(id)a0;
- (id)_viewWithSymbolName:(id)a0 tintColor:(id)a1;
- (id)_viewWithTextLabel:(id)a0 tintColor:(id)a1;
- (BOOL)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)a0 ofBundleId:(id)a1;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasActivityBehavior;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (BOOL)shouldIgnoreSystemChromeSuppression;
- (BOOL)shouldSuppressElementWhileOnCoversheet;
- (BOOL)shouldSuppressElementWhilePresentingAppWithBundleId:(id)a0;

@end
