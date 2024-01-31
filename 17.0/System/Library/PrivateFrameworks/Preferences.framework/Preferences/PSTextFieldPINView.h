@class NSString, UITextField, AlphanumericPINTableViewCell, UITableView;

@interface PSTextFieldPINView : PINView <UITableViewDataSource, UITableViewDelegate> {
    UITextField *_passcodeField;
    AlphanumericPINTableViewCell *_cell;
    UITableView *_table;
}

@property (nonatomic) BOOL usesNumericKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringValue;
- (BOOL)keyboardInputChanged:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
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
- (void)setTextFieldKeyboardAppearance:(long long)a0;
- (void)hidePasscodeField:(BOOL)a0;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (void)okButtonPressed:(id)a0;
- (void)setTextFieldKeyboardType:(long long)a0;
- (void)showError:(id)a0 animate:(BOOL)a1;

@end
