@class NSString, UIView;
@protocol SAElementHosting, SAElement, SAUILayoutHosting, SAAlertHosting;

@interface SBPrototypeProminentPresentingActivityElementViewProvider : NSObject <SBSystemApertureSuppressible, SAAlertBehavior, SAUIElementViewProviding, SAUILayoutSpecifying, SAElement> {
    BOOL _prominent;
    BOOL _showsTrailing;
}

@property (nonatomic, getter=isProminent) BOOL prominent;
@property (nonatomic) BOOL showsTrailing;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SAAlertHosting> alertHost;
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
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;

- (id)init;
- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasAlertBehavior;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (long long)systemApertureLayoutCustomizingOptions;

@end
