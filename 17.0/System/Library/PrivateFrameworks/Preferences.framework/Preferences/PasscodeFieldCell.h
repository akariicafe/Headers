@class NSString, PSPasscodeField;
@protocol KeychainSyncPasscodeFieldDelegate;

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate>

@property (weak, nonatomic) id<KeychainSyncPasscodeFieldDelegate> delegate;
@property (nonatomic) BOOL convertsNumeralsToASCII;
@property (nonatomic) BOOL denyFirstResponder;
@property (readonly, nonatomic) PSPasscodeField *passcodeField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)keyboardType;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)hasText;
- (void).cxx_destruct;
- (void)deleteBackward;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (id)passcodeField:(id)a0 shouldInsertText:(id)a1;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (void)_setSecureTextEntry:(BOOL)a0;
- (void)cellTapped:(id)a0;
- (id)passcodeText;
- (void)setPasscodeText:(id)a0;

@end
