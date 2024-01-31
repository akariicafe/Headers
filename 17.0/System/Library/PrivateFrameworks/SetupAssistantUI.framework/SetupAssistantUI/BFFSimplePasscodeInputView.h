@class NSString, PSPasscodeField;

@interface BFFSimplePasscodeInputView : BFFPasscodeInputView <PSPasscodeFieldDelegate>

@property (retain, nonatomic) PSPasscodeField *passcodeField;
@property (nonatomic) BOOL limitCharactersToNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)passcodeField:(id)a0 shouldInsertText:(id)a1;
- (id)passcode;
- (void)setPasscode:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfEntryFields:(unsigned long long)a1;
- (id)passcodeDisplayView;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;

@end
