@class CAGradientLayer, NSString, UITextField, PRMonogram;

@interface PRMonogramView : UIView <UITextFieldDelegate> {
    CAGradientLayer *_circleGradientLayer;
    UITextField *_textField;
}

@property (nonatomic, getter=isCircular) BOOL circular;
@property (retain, nonatomic) PRMonogram *monogram;
@property (nonatomic) BOOL bordered;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL allowsEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)_updateTextLabel;
- (void)textFieldDidBeginEditing:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)_updateCornerRadii;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)didMoveToWindow;
- (void)textFieldResignFirstResponder;

@end
