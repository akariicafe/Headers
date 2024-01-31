@class UILabel, CKDetailsViewAddGroupNameViewUITextField, NSString;
@protocol CKDetailsAddGroupNameViewDelegate;

@interface CKDetailsAddGroupNameView : UIView <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *placeholderLabel;
@property (retain, nonatomic) CKDetailsViewAddGroupNameViewUITextField *inputField;
@property (weak, nonatomic) id<CKDetailsAddGroupNameViewDelegate> delegate;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)commitGroupName;

@end
