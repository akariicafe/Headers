@class NSTimer, NSString, NSArray, UINavigationController, CTCellularPlanItem, NSError, TSSIMSetupFlow, UIViewController;
@protocol PSUIReActivateSIMSpecifierModelDelegate;

@interface TransferBackPlanCache : NSObject <TSSIMSetupDelegate>

@property (weak) UINavigationController *navigationController;
@property (retain) TSSIMSetupFlow *flow;
@property (retain) UIViewController *rootViewController;
@property (retain) NSArray *existedIccids;
@property (retain) id transferBackItem;
@property (retain) NSTimer *activateTimer;
@property (retain) CTCellularPlanItem *transferToItem;
@property (retain) NSString *installingIccid;
@property (retain) NSError *transferError;
@property (retain) NSError *failureWebsheetError;
@property BOOL isPlanReactivated;
@property (retain) id<PSUIReActivateSIMSpecifierModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)getLogger;
- (void).cxx_destruct;
- (void)_presentViewController:(id)a0;
- (BOOL)_canLaunchSIMSetupFlow;
- (void)_handleActivateExpiry;
- (void)_prepareSIMSetupFlow;
- (void)_showWifiAlert;
- (void)_useLine:(BOOL)a0 forPlan:(id)a1;
- (void)cellularPlanChanged:(id)a0;
- (id)initWithDelegate:(id)a0 navigationController:(id)a1 transferBackPlan:(id)a2;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (void)transferBack:(id)a0;

@end
