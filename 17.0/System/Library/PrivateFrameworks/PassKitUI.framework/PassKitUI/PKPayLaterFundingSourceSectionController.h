@class PKPayLaterFinancingOption, NSString, NSArray, PKPayLaterSetupFlowController, NSMutableDictionary, PKPayLaterPaymentSource, PKPeerPaymentAccount, PKPayLaterButtonRow;
@protocol PKPayLaterFundingSourceSectionControllerDelegate;

@interface PKPayLaterFundingSourceSectionController : PKPayLaterSectionController <PKPaymentSetupDelegate> {
    PKPayLaterSetupFlowController *_setupController;
    PKPayLaterFinancingOption *_selectedFinancingOption;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPayLaterPaymentSource *_selectedFundingSource;
    id<PKPayLaterFundingSourceSectionControllerDelegate> _delegate;
    NSMutableDictionary *_paymentSourceRows;
    PKPayLaterButtonRow *_addPaymentMethodRow;
    BOOL _autoPayment;
}

@property (copy, nonatomic) NSArray *availableFundingSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureAddPaymentMethoSectionSnapshot:(id)a0;
- (void)_configureAutoPaySectionSnapshot:(id)a0;
- (void)_configurePaymentPassSectionSnapshot:(id)a0;
- (id)_pageItemForSectionIndex:(long long)a0;
- (id)_paymentSourceRowForBankFundingSource:(id)a0;
- (id)_paymentSourceRowForPassFundingSource:(id)a0;
- (void)_presentProvisioningFlow;
- (id)_rowForPaymentSource:(id)a0;
- (void)_showAddPaymentButtonSpinner:(BOOL)a0;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (void)didTapHyperLink:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 dynamicContentPage:(id)a1 peerPaymentAccount:(id)a2 selectedFundingSource:(id)a3 autoPayment:(BOOL)a4 availableFundingSources:(id)a5 setupController:(id)a6 delegate:(id)a7;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)paymentSetupDidFinish:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
