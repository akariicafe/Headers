@interface SBUIPasscodeLockViewSimpleFixedDigitKeypad : SBUIPasscodeLockViewWithKeypad

@property (readonly, nonatomic) unsigned long long numberOfDigits;

- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (id)_newEntryField;
- (id)initWithLightStyle:(BOOL)a0;
- (id)initWithLightStyle:(BOOL)a0 numberOfDigits:(unsigned long long)a1;

@end
