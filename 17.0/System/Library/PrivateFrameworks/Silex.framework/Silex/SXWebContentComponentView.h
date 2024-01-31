@class NSString, UITapGestureRecognizer, SXWebContentComponentInteractionManager, SXWebContentComponentExposureEvent, NFPendingPromise, SWContainerViewController, NFStateMachine, SXComponentExposureMonitor, UILabel, UIActivityIndicatorView;
@protocol SXWebContentDataSourceProviding, SWNavigationManager, SXResourceDataSource, SWReachabilityProvider, SXWebContentConfigurationProvider, SXAnalyticsReporting, SWLoadingPolicyProvider, SXLayoutInvalidator;

@interface SXWebContentComponentView : SXComponentView <SXViewportChangeListener, SWReachabilityObserver>

@property (readonly, nonatomic) id<SXAnalyticsReporting> analyticsReporting;
@property (readonly, nonatomic) SWContainerViewController *containerViewController;
@property (readonly, nonatomic) id<SXWebContentConfigurationProvider> configurationProvider;
@property (readonly, nonatomic) id<SWNavigationManager> navigationManager;
@property (readonly, nonatomic) SXWebContentComponentInteractionManager *interactionManager;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly, nonatomic) id<SXResourceDataSource> resourceDataSource;
@property (readonly, nonatomic) id<SWLoadingPolicyProvider> loadingPolicyProvider;
@property (readonly, nonatomic) id<SXLayoutInvalidator> layoutInvalidator;
@property (readonly, nonatomic) NFStateMachine *stateMachine;
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) NFPendingPromise *invalidationPromise;
@property (readonly, nonatomic) SXComponentExposureMonitor *componentExposureMonitor;
@property (retain, nonatomic) SXWebContentComponentExposureEvent *componentExposureEvent;
@property (readonly, nonatomic) id<SXWebContentDataSourceProviding> dataSourceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure;
- (void)reachabilityChanged:(BOOL)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)createStateMachine;
- (void)layoutSubviews;
- (void)handleTap:(id)a0;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)layoutErrorView;
- (void)configureComponentExposureMonitor;
- (void)configureConfigurationProvider;
- (void)configureErrorProvider;
- (void)configurePresentationManager;
- (void)configureViewController;
- (id)createDisabledState;
- (id)createErrorState;
- (id)createLoadingState;
- (id)createPresentationState;
- (id)foregroundColor:(long long)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 containerViewController:(id)a4 configurationProvider:(id)a5 navigationManager:(id)a6 analyticsReporting:(id)a7 componentExposureMonitor:(id)a8 interactionManagerFactory:(id)a9 reachabilityProvider:(id)a10 resourceDataSource:(id)a11 loadingPolicyProvider:(id)a12 dataSourceProvider:(id)a13 layoutInvalidator:(id)a14;
- (void)layoutLoadingIndicator;
- (void)layoutWebView;
- (void)loadComponent:(id)a0;
- (void)loadWebContent;
- (void)presentWithHeight:(double)a0;
- (void)reloadWebContent;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;

@end
