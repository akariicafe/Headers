@class NSString, UIImageView, UIImage, UILabel;

@interface SFHighlightContactListButton : UIControl {
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;

- (void)_updateBackgroundColor;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
