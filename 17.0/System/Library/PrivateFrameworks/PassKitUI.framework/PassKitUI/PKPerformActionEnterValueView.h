@class PKPaymentPassAction, PKTransitPassProperties, NSDecimalNumber, PKEnterValueNewBalanceView, PKPeerPaymentService, UIButton, PKNumberPadSuggestionsView, PKNumericSuggestionsEnterValueAlgorithm, NSString, PKPeerPaymentAccount, PKEnterCurrencyAmountView, UITextField, PKPass, PKNumericSuggestionLastInput;
@protocol PKPerformActionViewDelegate, PKPaymentDataProvider;

@interface PKPerformActionEnterValueView : UIView <PKNumberPadSuggestionsViewDelegate, UITextFieldDelegate, PKPaymentDataProviderDelegate, PKEnterCurrencyAmountViewDelegate, PKPerformActionView> {
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_newBalanceView;
    PKNumberPadSuggestionsView *_suggestionView;
    UIButton *_autoReloadButton;
    BOOL _shouldShowAutoReloadButton;
    PKPass *_pass;
    PKPaymentPassAction *_action;
    PKNumericSuggestionsEnterValueAlgorithm *_suggestionGenerator;
    PKNumericSuggestionLastInput *_lastInput;
    PKTransitPassProperties *_transitProperties;
    NSDecimalNumber *_currentAmount;
    id<PKPaymentDataProvider> _paymentServiceDataProvider;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_peerPaymentAccount;
}

@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *minLoadedBalance;
@property (copy, nonatomic) NSDecimalNumber *maxLoadedBalance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPerformActionViewDelegate> delegate;
@property (readonly, nonatomic) UITextField *amountTextField;

- (id)init;
- (void)dealloc;
- (id)pass;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id)transactionAmount;
- (void)setMinBalance:(id)a0;
- (void)_createSubviews;
- (id)transactionCurrency;
- (double)_amountTopPadding;
- (void)_currentAmountDidChangeTo:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (void)_didTapSetUpAutoReloadButton;
- (BOOL)_isCurrentAmountValid;
- (void)_peerPaymentAccountChanged:(id)a0;
- (void)_readCurrentBalance;
- (BOOL)_shouldShakeCard:(id)a0;
- (void)_updateCurrentAmount:(id)a0 shouldGenerateNewSuggestions:(BOOL)a1;
- (void)_updateCurrentBalanceWithUpdatedTransitProperties;
- (void)_updatePeerPaymentAccount;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (void)fetchServiceProviderDataWithCompletion:(id /* block */)a0;
- (id)initWithPass:(id)a0 action:(id)a1 paymentDataProvider:(id)a2;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;
- (void)saveLastInputValues;
- (void)willDismissViewController;

@end
