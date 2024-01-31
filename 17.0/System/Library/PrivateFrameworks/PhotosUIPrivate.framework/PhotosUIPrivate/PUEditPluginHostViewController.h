@class PUEditingExtensionUndoProxyHostSide, UIBarButtonItem, NSString, PUEditPlugin, NSNumber, UIViewController;
@protocol PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, NSCopying;

@interface PUEditPluginHostViewController : UIViewController <PXForcedDismissableViewController, PUEditingExtensionUndoButtonHost>

@property (retain) UIViewController *remoteViewController;
@property (copy) id<NSCopying> request;
@property (nonatomic) BOOL extensionDidBeginContentEditing;
@property (nonatomic) BOOL didHandleCancel;
@property (nonatomic) BOOL didHandleDone;
@property (retain, nonatomic) id disablingIdleTimerToken;
@property (retain, nonatomic) NSNumber *allowsFullScreen;
@property (retain, nonatomic) PUEditingExtensionUndoProxyHostSide *undoProxy;
@property (weak, nonatomic) UIBarButtonItem *undoBarButtonItem;
@property (weak, nonatomic) UIBarButtonItem *redoBarButtonItem;
@property (nonatomic) BOOL showUndoRedoButtons;
@property (readonly, nonatomic) PUEditPlugin *plugin;
@property (weak, nonatomic) id<PUEditPluginHostViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<PUEditPluginHostViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithPlugin:(id)a0;
- (void)_handleDoneButton:(id)a0;
- (void)loadView;
- (long long)preferredUserInterfaceStyle;
- (BOOL)prefersStatusBarHidden;
- (id)_extensionVendorProxy;
- (void).cxx_destruct;
- (BOOL)prepareForDismissingForced:(BOOL)a0;
- (void)_dismiss;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_handleCancel;
- (id)_hostContext;
- (void)_handleCancelButton:(id)a0;
- (void)_setupUndoProxy;
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(BOOL)a0;
- (void)_beginContentEditingWithCompletionHandler:(id /* block */)a0 timeout:(double)a1;
- (void)_beginDisablingIdleTimer;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_handleVendorVersion:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_queryAllowsFullScreen:(id /* block */)a0;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(id /* block */)a0 timeout:(double)a1;
- (void)_updateBarButtonsWithUndoRedoVisible:(BOOL)a0;
- (void)handleRedoButton:(id)a0;
- (void)handleUndoButton:(id)a0;
- (void)loadRemoteViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)queryHandlingCapabilityForAdjustmentData:(id)a0 withResponseHandler:(id /* block */)a1 timeout:(double)a2;
- (void)setShowUndoRedo:(BOOL)a0;
- (void)setUndoEnabled:(BOOL)a0 redoEnabled:(BOOL)a1;

@end
