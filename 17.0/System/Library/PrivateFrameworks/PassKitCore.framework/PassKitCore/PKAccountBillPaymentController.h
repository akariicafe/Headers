@class PKAccountEvent, NSDecimalNumber, PKAccountWebServiceSchedulePaymentRequest, PKAccountServiceTransferRequest, PKPaymentAuthorizationCoordinator, NSString, PKAccount, PKPaymentPass, NSMutableSet, NSArray, PKPaymentService, PKPaymentWebService, NSError, PKAccountService;
@protocol PKAccountBillPaymentControllerDelegate;

@interface PKAccountBillPaymentController : NSObject <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPaymentWebService *_webService;
    PKPaymentService *_paymentService;
    PKAccountWebServiceSchedulePaymentRequest *_schedulePaymentRequest;
    PKPaymentAuthorizationCoordinator *_schedulePaymentAuthorizationCoordinator;
    NSError *_applePayTrustResponseError;
    PKPaymentPass *_pass;
    PKAccountService *_accountService;
    NSDecimalNumber *_totalPaymentAmount;
    NSDecimalNumber *_peerPaymentBalance;
    PKAccountServiceTransferRequest *_paymentRequest;
    PKAccountEvent *_billPaymentSuggestedAmountDataEvent;
    BOOL _performingAction;
    BOOL _completedBillPayment;
    BOOL _fetchingData;
    NSError *_fetchingDataError;
    NSMutableSet *_dataFetchingCompletionHandlers;
}

@property (retain, nonatomic) PKAccount *account;
@property (weak, nonatomic) id<PKAccountBillPaymentControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *fundingSources;
@property (retain, nonatomic) NSArray *payments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithAccount:(id)a0;
- (void)_accountDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_completeFetchingFundingSources;
- (id)_bankAccountsForFundingSources:(id)a0;
- (id)_achPaymentWithAmount:(id)a0 bankInformation:(id)a1;
- (void)_addNewBankAccountIfNecessary:(id)a0;
- (id)_apcPaymentWithAmount:(id)a0;
- (void)_billPaymentHasCompletedWithState:(unsigned long long)a0 error:(id)a1;
- (id)_buildTransferRequestForDate:(id)a0;
- (id)_createSchedulePaymentRequestWithSelectedMethods:(unsigned long long)a0 bankInformation:(id)a1;
- (void)_fetchFundingSources;
- (id)_paymentSummaryItemsForPaymentAmountACH:(id)a0 apc:(id)a1 bankInformation:(id)a2;
- (void)_performApplePayTrustSignatureRequestWithSignature:(id)a0 completion:(id /* block */)a1;
- (void)_presentPaymentAuthorizationWithPaymentRequest:(id)a0 completion:(id /* block */)a1;
- (void)_updateUseApplePayCashSetting:(BOOL)a0;
- (void)canPerformBillPaymentWithAmount:(id)a0 scheduledDate:(id)a1 completion:(id /* block */)a2;
- (id)initWithAccount:(id)a0 paymentPass:(id)a1;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeApplePayTrustSignature:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didUpdateAccountServicePaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)performBillPaymentActionWithAmount:(id)a0;
- (void)performBillPaymentActionWithAmount:(id)a0 billPaymentSuggestedAmountDataEvent:(id)a1;
- (void)performBillPaymentActionWithAmount:(id)a0 scheduledDate:(id)a1 billPaymentSuggestedAmountDataEvent:(id)a2;
- (id)presentationSceneIdentifierForPaymentAuthorizationCoordinator:(id)a0;

@end
