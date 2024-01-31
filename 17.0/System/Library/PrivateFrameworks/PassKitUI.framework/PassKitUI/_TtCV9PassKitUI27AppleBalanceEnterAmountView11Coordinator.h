@interface _TtCV9PassKitUI27AppleBalanceEnterAmountView11Coordinator : NSObject <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate> {
    void /* unknown type, empty encoding */ _addDisabled;
    void /* unknown type, empty encoding */ _amount;
    void /* unknown type, empty encoding */ _amountGuide;
    void /* unknown type, empty encoding */ _amountGuideColor;
    void /* unknown type, empty encoding */ accountModel;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ view;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)enterCurrencyAmountView:(id)a0 shouldChangeAmountFrom:(id)a1 to:(id)a2;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)a0;
- (void)numberPadSuggestionsView:(id)a0 didSelectSuggestion:(id)a1;

@end
