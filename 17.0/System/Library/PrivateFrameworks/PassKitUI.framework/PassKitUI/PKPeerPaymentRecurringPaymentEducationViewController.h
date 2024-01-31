@class PKTransactionSourceCollection, NSString, PKPeerPaymentAccount, PKPaymentPass, PKFamilyMemberCollection;

@interface PKPeerPaymentRecurringPaymentEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate> {
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentAccount *_account;
    PKPaymentPass *_paymentPass;
}

@property (copy, nonatomic) id /* block */ addCardHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_requestOpenURL:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithContext:(long long)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2;

@end
