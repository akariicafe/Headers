@class NSString, UITextField;

@interface NTKCompanionMonogramEntryViewController : PSListController <UITextFieldDelegate, NTKCompanionMonogramEntryDataSource>

@property (class, readonly, nonatomic) NSString *localizedTitle;
@property (class, readonly, nonatomic) NSString *localizedDescription;

@property (retain, nonatomic) UITextField *monogramEntry;
@property (nonatomic) BOOL showsDoneButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (id)specifiers;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (void)_doneTapped;
- (void)returnPressedAtEnd;
- (id)customMonogram:(id)a0;
- (void)_resetEntryField;
- (void)setCustomMonogram:(id)a0 specifier:(id)a1;

@end
