@class NSTimer, NSString, NSError, CoreTelephonyClient, CTCellularPlanItem, UINavigationController, TSSIMSetupFlow, NSDictionary, UIBarButtonItem, NSNumber;

@interface TSCellularPlanActivatingFlow : TSSIMSetupFlow <CoreTelephonyClientCellularPlanManagementDelegate, TSCellularPlanManagerCacheDelegate, TSSIMSetupDelegate, TSSIMSetupFlowDelegate>

@property unsigned long long currentActivatingState;
@property BOOL eSIMInstallFromWebsheetFlowStarted;
@property BOOL skipActivatingPane;
@property BOOL shouldShowCompletePaneOnTimeout;
@property BOOL planActiveOnSource;
@property (retain) CTCellularPlanItem *updatePlanItem;
@property (retain) NSTimer *activatingTimer;
@property unsigned long long backgroundTask;
@property (retain) CoreTelephonyClient *client;
@property (retain) NSString *planName;
@property (retain) NSString *phoneNumber;
@property (retain) NSError *planInstallError;
@property (retain) NSError *transferError;
@property (retain) NSError *failureWebsheetError;
@property (retain) NSString *carrierName;
@property (retain) NSString *carrierErrorCode;
@property (retain) UIBarButtonItem *cancelButton;
@property (retain) NSString *installingPlanIdentifier;
@property (retain) NSString *subscriptionContextUUID;
@property (retain) NSNumber *waitForPhoneNumber;
@property (copy) id /* block */ firstViewControllerCallback;
@property long long transferState;
@property (retain) TSSIMSetupFlow *websheetFlow;
@property (weak) UINavigationController *websheetRootViewController;
@property (retain) id transferBackOldItem;
@property double startTime;
@property unsigned long long planSetupType;
@property (retain) NSDictionary *websheetOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_startTimer:(double)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_stopTimer;
- (void)launchWebsheet:(id)a0 completion:(id /* block */)a1;
- (void)transferEventUpdate:(id)a0;
- (id)_firstViewController;
- (id)firstViewController;
- (BOOL)_isAppInBackground;
- (void)firstViewController:(id /* block */)a0;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (void)_submitCellularPlanSetupDetails;
- (void)planItemsUpdated:(id)a0 planListError:(id)a1;
- (void)_handleActivatingExpiry;
- (void)_maybeDeleteTransferBackItem:(id)a0;
- (void)_maybeDismissAlert:(id /* block */)a0;
- (void)_maybeMoveToNextViewController;
- (void)_onESIMInstallFromWebSheetFlowStart;
- (void)_onTransferError:(id)a0;
- (void)_shouldWaitUntilPhoneNumberBeReady:(id /* block */)a0;
- (void)_startBackgroundTask;
- (BOOL)_startedByFollowup;
- (void)_stopBackgroundTask;
- (void)cancelFlow;
- (id)initWithSkipActivatingPane:(BOOL)a0 delayStartTimer:(BOOL)a1 transferBackPlan:(id)a2 setupType:(unsigned long long)a3;
- (id)nextViewControllerFrom:(id)a0;
- (void)offerFallbackOption;
- (void)redirectToBTFlow;
- (BOOL)shouldOfferFallbackOptionOnError:(id)a0;

@end
