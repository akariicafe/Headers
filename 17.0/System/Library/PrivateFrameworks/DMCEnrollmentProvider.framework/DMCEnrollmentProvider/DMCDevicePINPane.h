@class NSString, UIView;

@interface DMCDevicePINPane : DevicePINPane

@property (copy, nonatomic) NSString *titleText;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) UIView *descriptionLabel;
@property (readonly, nonatomic) UIView *passcodeField;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)_textFont;

@end
