@class NSNumber, NSString, CXCallObserver, CTXPCServiceSubscriptionContext, PSListController, PSUICoreTelephonyCallCache;

@interface PSUITurnOffCellularSpecifier : PSSpecifier <CXCallObserverDelegate>

@property (retain, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache;
@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) CXCallObserver *callObserver;
@property (retain, nonatomic) NSNumber *cellularOff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (void).cxx_destruct;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (void)_disableCellular:(BOOL)a0;
- (void)_showPopup;
- (id)initWithContext:(id)a0 callCache:(id)a1 hostController:(id)a2;
- (id)isCellularOff:(id)a0;
- (void)setCellularOff:(id)a0 specifier:(id)a1;
- (void)setSwitchEnabled;

@end
