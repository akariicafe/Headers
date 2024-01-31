@class NSString, SKUIComposeTextFieldConfiguration, UITextField, UILabel;

@interface SKUIComposeTextField : UIView <UITextFieldDelegate> {
    SKUIComposeTextFieldConfiguration *_configuration;
    long long _currentTextLength;
    UILabel *_label;
}

@property (readonly, nonatomic) long long composeReviewStyle;
@property (weak, nonatomic) id delegate;
@property (readonly, nonatomic) SKUIComposeTextFieldConfiguration *configuration;
@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelColorForStyle:(long long)a0;
+ (id)labelFontForStyle:(long long)a0;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)_textChanged:(id)a0;
- (id)initWithConfiguration:(id)a0 style:(long long)a1;
- (BOOL)textField:(id)a0 shouldInsertText:(id)a1 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
