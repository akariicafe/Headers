@class NSString, UIViewController, UIView;
@protocol SBHWidgetContainerViewControllerDelegate;

@interface SBHWidgetContainerViewController : UIViewController <SBHMultiplexingViewControllerObserver>

@property (retain, nonatomic) UIView *deactivationSnapshotView;
@property (readonly, nonatomic) UIViewController *widgetViewController;
@property (readonly, nonatomic) unsigned long long gridSizeClass;
@property (readonly, copy, nonatomic) NSString *applicationName;
@property (weak, nonatomic) id<SBHWidgetContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isBlockedForScreenTimeExpiration) BOOL blockedForScreenTimeExpiration;
@property (nonatomic) unsigned long long userVisibilityStatus;
@property (nonatomic) BOOL allowsEdgeAntialiasing;
@property (nonatomic) BOOL requiresClippingToBounds;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) struct SBIconApproximateLayoutPosition { unsigned long long horizontal; unsigned long long vertical; } approximateLayoutPosition;
@property (readonly, nonatomic) BOOL wantsSystemMaterialBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_avocadoViewController;
- (void)viewWillAppear:(BOOL)a0;
- (void)multiplexingViewControllerDidActivate:(id)a0;
- (id)cancelTouchesForCurrentEventInHostedContent;
- (id)widgetContextMenuController;
- (void)loadView;
- (id)snapshotView;
- (void)_clearDeactivationSnapshotView;
- (id)initWithWidgetViewController:(id)a0 gridSizeClass:(unsigned long long)a1 applicationName:(id)a2;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateWidgetVisibility;
- (id)_widgetExtensionBundleIdentifier;
- (void)viewDidAppear:(BOOL)a0;
- (id)_avocadoWidget;
- (void)viewDidDisappear:(BOOL)a0;
- (id)widgetContainerView;
- (void)multiplexingViewControllerWillDeactivate:(id)a0;

@end
