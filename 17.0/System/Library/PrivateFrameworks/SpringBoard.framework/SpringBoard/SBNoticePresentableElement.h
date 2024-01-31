@class UIColor, NSString, NSHashTable, UIView, FBScene;
@protocol SAAlertHosting, BNTemplateContentProviding, SAElementHosting, SAElement, SAUILayoutHosting, BNPresentable;

@interface SBNoticePresentableElement : NSObject <SAUIElementViewProviding, SAUIContentTransitioning, SBSystemApertureContextProviding, SBPresentableElement, SAAlertBehavior> {
    UIView *_primaryView;
    UIView *_secondaryView;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) id<BNPresentable, BNTemplateContentProviding> templatePresentable;
@property (readonly, nonatomic) UIView *leadingView;
@property (readonly, nonatomic) UIView *trailingView;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) id<SAElement> element;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long layoutAxis;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL preventsSwipeToHide;
@property (readonly, nonatomic) id<BNPresentable> presentable;
@property (weak, nonatomic) id<SAElementHosting> elementHost;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) long long layoutMode;
@property (readonly, nonatomic) long long minimumSupportedLayoutMode;
@property (readonly, nonatomic) long long maximumSupportedLayoutMode;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (weak, nonatomic) id<SAUILayoutHosting> layoutHost;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (weak, nonatomic) id<SAAlertHosting> alertHost;

+ (id)_preferredFont:(BOOL)a0 textStyle:(id)a1 weight:(double)a2 additionalTraits:(unsigned int)a3;

- (void)_enumerateObserversRespondingToSelector:(SEL)a0 usingBlock:(id /* block */)a1;
- (id)viewProvider;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_primaryView;
- (id)_secondaryView;
- (id)_templateItemViewFromProvider:(id)a0 isPrimary:(BOOL)a1;
- (void)_updateVisualStlyingOfView:(id)a0 fromProvider:(id)a1;
- (void)addElementLayoutSpecifierObserver:(id)a0;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (id)elementDescription;
- (BOOL)handleElementViewEvent:(long long)a0;
- (BOOL)hasAlertBehavior;
- (id)initWithTemplatePresentable:(id)a0;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)removeElementLayoutSpecifierObserver:(id)a0;
- (void)setLayoutMode:(long long)a0 reason:(long long)a1;
- (BOOL)shouldSuppressElementWhileOnCoversheet;

@end
