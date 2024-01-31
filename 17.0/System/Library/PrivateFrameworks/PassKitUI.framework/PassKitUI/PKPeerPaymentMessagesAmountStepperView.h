@class UIView, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer, NSNumberFormatter, PKCurrencyAmount, NSObject, PKPeerPaymentMessagesRoundedButton, NSDecimalNumber, UILabel;
@protocol OS_dispatch_source;

@interface PKPeerPaymentMessagesAmountStepperView : UIView <UIGestureRecognizerDelegate> {
    PKPeerPaymentMessagesRoundedButton *_plusButton;
    PKPeerPaymentMessagesRoundedButton *_minusButton;
    BOOL _plusMinusVisible;
    UIView *_centerView;
    UILabel *_amountLabel;
    NSString *_amountString;
    NSString *_amountCurrency;
    NSNumberFormatter *_currencyFormatter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSObject<OS_dispatch_source> *_longPressTimer;
    BOOL _longPressTimerSuspended;
    BOOL _nextNumberPadActionCausesReset;
    BOOL _usesAccessibilityLayout;
    BOOL _usedStepper;
}

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } referenceSize;

@property (copy, nonatomic) PKCurrencyAmount *amount;
@property (copy, nonatomic) NSDecimalNumber *minAmount;
@property (copy, nonatomic) NSDecimalNumber *maxAmount;
@property (copy, nonatomic) id /* block */ amountChangedHandler;
@property (copy, nonatomic) id /* block */ amountTappedHandler;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL usedKeypad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forStyle:(unsigned long long)a1;

- (id)init;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_handleTap:(id)a0;
- (void)_handleLongPress:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesChanged:(id)a0 withEvent:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (id)_stringForAction:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_posixFormatter;
- (id)_amountLabelFont;
- (double)_amountLabelFontSize;
- (void)_cleanupPosixString;
- (id)_decimalNumberFromPosixString:(id)a0;
- (void)_decrementAmount;
- (void)_incrementAmount;
- (id)_posixLocale;
- (id)_posixStringFromDecimalNumber:(id)a0;
- (void)_shakeAmountLabel;
- (id)_updatePosixString:(id)a0 withAction:(unsigned long long)a1 maxDigits:(unsigned long long)a2 maxDecimalPlaces:(unsigned long long)a3;
- (void)handleNumberPadAction:(unsigned long long)a0;
- (void)setPlusMinusVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)validateNumberPadInput;

@end
