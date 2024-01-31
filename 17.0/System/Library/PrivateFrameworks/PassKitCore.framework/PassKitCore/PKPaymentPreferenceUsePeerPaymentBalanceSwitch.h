@class PKCurrencyAmount, PKPaymentPass;

@interface PKPaymentPreferenceUsePeerPaymentBalanceSwitch : PKPaymentPreference

@property (retain, nonatomic) PKPaymentPass *peerPaymentPass;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentBalance;
@property (nonatomic, getter=isOn) BOOL on;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;

@end
