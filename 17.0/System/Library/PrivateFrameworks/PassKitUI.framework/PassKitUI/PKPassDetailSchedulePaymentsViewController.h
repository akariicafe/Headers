@class PKTransactionSourceCollection, NSString, PKAccountServiceAccountResolutionController, PKPassDetailScheduledPaymentsSectionController, PKAccountUserCollection, PKAccount;

@interface PKPassDetailSchedulePaymentsViewController : PKDynamicTableViewController <PKPassDetailScheduledPaymentsSectionControllerDelegate, PKAccountServiceAccountResolutionControllerDelegate> {
    PKPassDetailScheduledPaymentsSectionController *_schedulePaymentsSection;
    PKAccount *_account;
    PKAccountUserCollection *_accountUserCollection;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKAccountServiceAccountResolutionController *_resolutionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_accountResolutionController;
- (void)accountServiceAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (id)cellForRow:(unsigned long long)a0 inSection:(id)a1;
- (void)didSelectInDemoMode;
- (void)didSelectMakePayment;
- (void)didSelectPayment:(id)a0;
- (void)didSelectSchedulePayments;
- (id)initWithAccount:(id)a0 pass:(id)a1 accountService:(id)a2 accountUserCollection:(id)a3 transactionSourceCollection:(id)a4;
- (void)recomputeMappedSectionsAndReloadSections:(id)a0;

@end
