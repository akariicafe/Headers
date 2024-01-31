@class PKCurrencyAmount;

@interface PKMockPeerPaymentController : PKPeerPaymentController {
    id _performCompletion;
}

@property (retain, nonatomic) PKCurrencyAmount *mockBalance;
@property (nonatomic) BOOL shouldGenerateMockTransactions;

- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id *)a0 didSelectPaymentMethod:(id)a1 handler:(id /* block */)a2;
- (void)quoteWithAmount:(id)a0 source:(unsigned long long)a1 requestToken:(id)a2 alternateFundingSource:(id)a3 recurringPaymentIdentifier:(id)a4 frequency:(unsigned long long)a5 startDate:(id)a6 threshold:(id)a7 completion:(id /* block */)a8;
- (void)_adjustBalanceForAuthorizedTransferQuote:(id)a0;
- (void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)a0;
- (void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)a0;
- (id)_quoteItemDictionaryWithType:(unsigned long long)a0 amount:(id)a1 alternateFundingSource:(id)a2 featureDescriptor:(id)a3;
- (void)formalRequestTokenForAmount:(id)a0 completion:(id /* block */)a1;
- (void)identifyRecipientWithAddress:(id)a0 senderAddress:(id)a1 completion:(id /* block */)a2;
- (id)initWithPeerPaymentWebService:(id)a0;
- (void)paymentAuthorizationCoordinator:(id *)a0 didAuthorizePeerPaymentQuote:(id)a1 handler:(id /* block */)a2;
- (void)performAction:(id)a0 withPaymentIdentifier:(id)a1 completion:(id /* block */)a2;

@end
