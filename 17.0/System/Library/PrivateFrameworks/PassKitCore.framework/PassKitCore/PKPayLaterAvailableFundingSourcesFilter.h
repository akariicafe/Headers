@class NSString, PKPeerPaymentAccount, NSMutableDictionary, PKPassLibrary;

@interface PKPayLaterAvailableFundingSourcesFilter : NSObject {
    NSMutableDictionary *_availableFundingSources;
    NSString *_defaultPassUniqueIdentifier;
    PKPassLibrary *_passLibrary;
}

@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;

- (void)clearCache;
- (void).cxx_destruct;
- (void)_addAccountPaymentSourcesToPaymentSourcesIfNecessary:(id)a0 supportedRepaymentTypes:(unsigned long long)a1 eligibleBankSources:(id)a2;
- (void)_assignPrioritiesToPaymentSources:(id)a0 lastUsedFundingSources:(id)a1;
- (id)_availableFundingSourcesForSupportedRepaymentTypes:(unsigned long long)a0 supportedRepaymentCountries:(id)a1 supportedRepaymentNetworks:(id)a2 eligibleBankSources:(id)a3 lastUsedFundingSources:(id)a4 installmentAmount:(id)a5;
- (void)_filterCashPassIfNecessaryFromPasses:(id)a0 supportedRepaymentTypes:(unsigned long long)a1 installmentAmount:(id)a2;
- (id)_filterLastUsedFundingSources:(id)a0 paymentSources:(id)a1;
- (id)_payLaterPassPaymentSourcesForPasses:(id)a0;
- (void)_prioritizePaymentSource:(id)a0 inPaymentSources:(id)a1;
- (id)_sortPaymentSources:(id)a0;
- (id)availableFundingSourcesForFinancingOption:(id)a0 eligibleBankSources:(id)a1 lastUsedFundingSources:(id)a2;
- (id)availableFundingSourcesForPaymentIntentDetails:(id)a0 currencyAmount:(id)a1 planIdentifier:(id)a2 primaryPaymentSource:(id)a3;
- (id)initWithPassLibrary:(id)a0 peerPaymentAccount:(id)a1 defaultPassUniqueIdentifier:(id)a2;

@end
