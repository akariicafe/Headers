@class PKPaymentPass, NSString, PKTransitBalanceModel, PKPaymentPassAction;
@protocol PKPaymentPassDetailPassActionSectionControllerDelegate, PKPaymentDataProvider, PKPaymentPassDetailWrapperSectionControllerDelegate;

@interface PKPaymentPassDetailPassActionSectionController : PKPaymentPassDetailSectionController <PKPaymentDataProviderDelegate> {
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
    id<PKPaymentDataProvider> _paymentDataProvider;
    long long _viewStyle;
}

@property (weak, nonatomic) id<PKPaymentPassDetailPassActionSectionControllerDelegate, PKPaymentPassDetailWrapperSectionControllerDelegate> delegate;
@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validForPaymentPass:(id)a0;

- (void).cxx_destruct;
- (id)sectionIdentifiers;
- (id)allSectionIdentifiers;
- (id)initWithPass:(id)a0 viewStyle:(long long)a1 paymentDataProvider:(id)a2 transitBalanceModel:(id)a3 delegate:(id)a4;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1 sectionIdentifier:(id)a2;
- (long long)tableView:(id)a0 numberOfRowsInSectionIdentifier:(id)a1;

@end
