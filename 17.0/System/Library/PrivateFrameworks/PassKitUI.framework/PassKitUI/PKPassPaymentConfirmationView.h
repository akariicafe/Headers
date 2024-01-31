@class NSDate, NSString, PKPassPaymentPayStateView, UIView, PKPaymentService, NSMutableDictionary, NSArray, PKTransitBalanceModel, NSObject, PKExpressTransactionState, PKPassTileGroupView;
@protocol PKPaymentDashboardCellActionHandleable, OS_dispatch_source;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate> {
    PKPassPaymentPayStateView *_payStateView;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellPrimary;
    UIView<PKPaymentDashboardCellActionHandleable> *_singleValueCellSecondary;
    UIView<PKPaymentDashboardCellActionHandleable> *_dualValueCellPrimary;
    PKPassTileGroupView *_tileGroupView;
    UIView *_displayedCellPrimary;
    BOOL _animated;
    PKExpressTransactionState *_expressState;
    BOOL _receivedTransaction;
    BOOL _receivedExit;
    BOOL _needsResolution;
    BOOL _showingResolution;
    BOOL _showingSuccessResolution;
    BOOL _animatingResolution;
    BOOL _showingAlert;
    long long _transactionType;
    NSObject<OS_dispatch_source> *_activityResolutionTimer;
    unsigned long long _resolutionCounter;
    NSDate *_visibleDate;
    NSMutableDictionary *_registeredExpressObservers;
    PKPaymentService *_paymentService;
    NSArray *_tiles;
    PKTransitBalanceModel *_transitBalanceModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)passWithUniqueIdentifier:(id)a0 didUpdateTiles:(id)a1;
- (void)transactionSourceIdentifier:(id)a0 didReceiveTransaction:(id)a1;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)layoutSubviews;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id)initWithPass:(id)a0;
- (void)_beginResolution;
- (BOOL)_canDisplaySecondaryView;
- (void)_disableActivityTimer;
- (id)_expressNotificationNames;
- (id)_findOrCreatePrimaryAdjustableSingleCellView;
- (id)_findOrCreatePrimaryFusedDoubleCellView;
- (id)_findOrCreateSecondaryView;
- (void)_handleExpressNotification:(id)a0;
- (BOOL)_isExpressOutstanding;
- (BOOL)_isRegisteredForAllExpressTransactionNotifications;
- (BOOL)_isRegisteredForAnyExpressTransactionNotifications;
- (void)_presentCheckmarkIfNecessary;
- (void)_registerForExpressTransactionNotifications:(BOOL)a0;
- (void)_registerObserverForNotificationName:(id)a0 center:(id)a1 handler:(id /* block */)a2;
- (void)_resolveActivityIfNecessary;
- (void)_resolveActivityIfNecessaryWithDelay;
- (BOOL)_shouldDisplayPrimaryView;
- (BOOL)_shouldDisplaySecondaryView;
- (void)_updateContentPrimaryView;
- (void)_updateContentSecondaryView;
- (void)didBecomeHiddenAnimated:(BOOL)a0;
- (void)didBecomeVisibleAnimated:(BOOL)a0;
- (id)initWithPass:(id)a0 context:(id)a1;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void)payStateView:(id)a0 revealingCheckmark:(BOOL)a1;
- (void)willBecomeHiddenAnimated:(BOOL)a0;
- (void)willBecomeVisibleAnimated:(BOOL)a0;

@end
