@class NSString, PSPasscodeField;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {
    PSPasscodeField *_passcodeField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringValue;
- (void)dealloc;
- (BOOL)isFirstResponder;
- (void)setStringValue:(id)a0;
- (void)appendString:(id)a0;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (void)deleteLastCharacter;
- (void)setBlocked:(BOOL)a0;
- (void)passcodeField:(id)a0 enteredPasscode:(id)a1;
- (void)hidePasscodeField:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 numberOfFields:(int)a1;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;

@end
