@class PKPassDetailsCardInfoSectionController, PKPaymentPass;

@interface PKTransitCardNumberViewController : PKDynamicTableViewController {
    PKPaymentPass *_pass;
    PKPassDetailsCardInfoSectionController *_cardInfoSectionController;
}

+ (BOOL)canShowForPass:(id)a0 expressPassController:(id)a1;

- (void).cxx_destruct;
- (id)initWithPass:(id)a0;

@end
