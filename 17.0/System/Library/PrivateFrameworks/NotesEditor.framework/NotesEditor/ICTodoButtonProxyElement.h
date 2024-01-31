@class ICTodoButton, ICBaseTextView;

@interface ICTodoButtonProxyElement : UIAccessibilityElement

@property (weak, nonatomic) ICTodoButton *todoButton;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (weak, nonatomic) ICBaseTextView *textView;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)accessibilityValue;
- (id)initWithTodoButton:(id)a0 inTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textView:(id)a2;

@end
