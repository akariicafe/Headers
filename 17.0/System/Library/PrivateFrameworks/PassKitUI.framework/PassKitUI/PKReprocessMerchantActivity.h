@class PKPaymentTransaction, PKPaymentPass;

@interface PKReprocessMerchantActivity : UIActivity {
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
}

- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)initWithTransaction:(id)a0 paymentPass:(id)a1;
- (void)prepareWithActivityItems:(id)a0;

@end
