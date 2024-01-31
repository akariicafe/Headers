@class NSURL, SFQueueingServiceViewControllerProxy, NSMutableDictionary, _UIRemoteViewController, _UIAsyncInvocation, _SFURLTextPreviewViewController, _WKActivatedElementInfo, UIColor, NSString, UIView, SFSafariLaunchPlaceholderView, NSNumber, NSArray, SFSafariViewControllerConfiguration, SFBrowserRemoteViewController, SFInteractiveDismissController;
@protocol SFSafariViewControllerDelegate, SFServiceViewControllerProtocol;

@interface SFSafariViewController : UIViewController <SFBrowserRemoteViewControllerDelegate, SFInteractiveDismissControllerDelegate, SFQueueingServiceViewControllerProxyDelegate, _SFLinkPreviewHeaderDelegate, _UIRemoteViewControllerContaining, _UIViewBoundingPathChangeObserver> {
    NSNumber *_adoptsPlatformConventions;
    SFSafariViewControllerConfiguration *_configuration;
    BOOL _didHandlerURLExternally;
    BOOL _hasBeenDisplayedAtLeastOnce;
    SFSafariLaunchPlaceholderView *_launchPlaceholderView;
    BOOL _urlLikelyForAuthentication;
    BOOL _usesCompatibilityPlaceholder;
    SFBrowserRemoteViewController *_remoteViewController;
    _UIAsyncInvocation *_cancelViewServiceRequest;
    SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *_serviceProxy;
    BOOL _remoteViewControllerHasBeenAdded;
    BOOL _hasNotifiedDelegateAboutInitialLoadCompleted;
    BOOL _hasRestartedViewService;
    NSArray *_customActivities;
    NSMutableDictionary *_activitiesMap;
    NSArray *_activityItemsForCustomActivities;
    BOOL _swipeGestureEnabled;
    SFInteractiveDismissController *_interactiveDismissController;
    long long _displayMode;
    BOOL _viewSizeIsTransitioning;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _verticalScrollIndicatorBaseInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _horizontalScrollIndicatorBaseInsets;
    BOOL _didInitializeViewService;
    _SFURLTextPreviewViewController *_textPreviewViewController;
    UIView *_linkPreviewHitTestView;
}

@property (class, readonly, nonatomic) BOOL _eligibleForPlatformConventions;
@property (class, readonly, nonatomic) BOOL _supportsPrewarming;

@property (readonly, nonatomic) SFQueueingServiceViewControllerProxy<SFServiceViewControllerProtocol> *serviceProxy;
@property (readonly, nonatomic) NSURL *initialURL;
@property (nonatomic) BOOL defersAddingRemoteViewController;
@property (nonatomic, setter=_setShowingLinkPreview:) BOOL _showingLinkPreview;
@property (nonatomic, setter=_setShowingLinkPreviewWithMinimalUI:) BOOL _showingLinkPreviewWithMinimalUI;
@property (retain, nonatomic, setter=_setPreviewActions:) NSArray *_previewActions;
@property (retain, nonatomic, setter=_setActivatedElementInfo:) _WKActivatedElementInfo *_activatedElementInfo;
@property (weak, nonatomic) id<SFSafariViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) SFSafariViewControllerConfiguration *configuration;
@property (retain, nonatomic) UIColor *preferredBarTintColor;
@property (retain, nonatomic) UIColor *preferredControlTintColor;
@property (nonatomic) long long dismissButtonStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;

+ (BOOL)_preventsAppearanceProxyCustomization;
+ (id)prewarmConnectionsToURLs:(id)a0;

- (id)initWithURL:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_boundingPathMayHaveChangedForView:(id)a0 relativeToBoundsOriginOnly:(BOOL)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)childViewControllerForStatusBarStyle;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)setModalPresentationStyle:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)_allowsUserInteractionWhenPreviewedInContextMenu;
- (id)previewActionItems;
- (void)setTransitioningDelegate:(id)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1;
- (void)_addRemoteViewControllerIfNeeded;
- (id)_fetchExcludedActivityTypesForURL:(id)a0 title:(id)a1;
- (void)_forwardNotificationToViewService:(id)a0;
- (void)_restartServiceViewController;
- (id)initWithURL:(id)a0 entersReaderIfAvailable:(BOOL)a1;
- (void)interactiveDismissControllerDidBegin:(id)a0;
- (void)interactiveDismissControllerDidCancel:(id)a0;
- (void)interactiveDismissControllerDidEnd:(id)a0;
- (void)linkPreviewHeader:(id)a0 didEnableLinkPreview:(BOOL)a1;
- (void)remoteViewController:(id)a0 didDecideShouldShowLinkPreviews:(BOOL)a1;
- (void)remoteViewController:(id)a0 didFinishInitialLoad:(BOOL)a1;
- (void)remoteViewController:(id)a0 executeCustomActivityProxyID:(id)a1;
- (void)remoteViewController:(id)a0 fetchActivityViewControllerInfoForURL:(id)a1 title:(id)a2;
- (void)remoteViewController:(id)a0 hostApplicationOpenURL:(id)a1;
- (void)remoteViewController:(id)a0 initialLoadDidRedirectToURL:(id)a1;
- (void)remoteViewController:(id)a0 setSwipeGestureEnabled:(BOOL)a1;
- (void)remoteViewController:(id)a0 viewServiceDidTerminateWithError:(id)a1;
- (void)remoteViewControllerDidLoadWebView:(id)a0;
- (void)remoteViewControllerWillDismiss:(id)a0;
- (void)remoteViewControllerWillOpenCurrentPageInBrowser:(id)a0;
- (void)serviceProxyWillQueueInvocation:(id)a0;

@end
