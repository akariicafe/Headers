@class UIBarButtonItem, NSString, SSProximityDevice;

@interface TSProximityTargetTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate>

@property (retain) SSProximityDevice *btServer;
@property (retain) UIBarButtonItem *cancelButton;
@property (retain) NSString *pin;
@property unsigned long long backgroundTask;
@property (retain) id transferBackPlan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_firstViewController;
- (id)firstViewController;
- (void)appBackgrounded;
- (void)firstViewController:(id /* block */)a0;
- (void)_handleSKEvent:(id)a0;
- (void)appForegrounded;
- (void)_endAdvertising;
- (void)_beginAdvertising:(id /* block */)a0;
- (void)_startBackgroundTask;
- (void)_stopBackgroundTask;
- (void)attemptFailed;
- (id)initWithTransferBackPlan:(id)a0;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (void)userDidTapCancel;

@end
