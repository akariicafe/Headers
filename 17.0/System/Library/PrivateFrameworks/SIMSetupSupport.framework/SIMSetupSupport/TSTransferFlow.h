@class NSError, NSString, NSArray, CTDisplayPlanList, NSObject, CUMessageSession, TSTransferFlowModel, UIBarButtonItem;
@protocol OS_dispatch_group;

@interface TSTransferFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate> {
    NSError *_planInstallError;
    BOOL _confirmationCodeRequired;
    NSString *_name;
    UIBarButtonItem *_cancelButton;
    NSObject<OS_dispatch_group> *_queryGroup;
    NSArray *_transferItems;
    CTDisplayPlanList *_pendingInstallItems;
    BOOL _isActivationPolicyMismatch;
    BOOL _isDualeSIMCapablityLoss;
}

@property (retain) CUMessageSession *session;
@property BOOL hasTransferablePlan;
@property BOOL isStandaloneProximityTransfer;
@property BOOL isAvailableOptionsQueryCompleted;
@property (retain) TSTransferFlowModel *model;
@property (copy) id /* block */ firstViewControllerCallback;
@property (retain) id transferBackPlan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)needsToRunUsingMessageSession:(id)a0 completion:(id /* block */)a1;
+ (void)needsToRunUsingMessageSession:(id)a0 transferablePlanOnSource:(BOOL)a1 completion:(id /* block */)a2;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)firstViewController;
- (void)viewControllerDidComplete:(id)a0;
- (void)firstViewController:(id /* block */)a0;
- (id)_createIntroViewController;
- (id)_firstViewController:(id)a0;
- (BOOL)_hasTransferablePlan:(id)a0;
- (void)_userDidTapCancel;
- (id)initWithSession:(id)a0 hasTransferablePlan:(BOOL)a1 isStandaloneProximityTransfer:(BOOL)a2 transferBackPlan:(id)a3;
- (id)nextViewControllerFrom:(id)a0;
- (void)setDefaultNavigationItems:(id)a0;
- (void)startOverWithFirstViewController:(id /* block */)a0;

@end
