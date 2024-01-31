@class UIImageView;

@interface BPSCheckMarkView : UIView

@property (nonatomic) BOOL isChecked;
@property (retain, nonatomic) UIImageView *imageView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)checkedImage;
- (id)uncheckedImage;

@end
