@class UILabel, UIImageView;

@interface AERoundedCornerButton : UIControl

@property (nonatomic, setter=_setLayoutStyle:) long long _layoutStyle;
@property (readonly, nonatomic) long long _buttonType;
@property (retain, nonatomic, setter=_setLabel:) UILabel *_label;
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;

+ (id)roundedCornerButtonWithStyle:(long long)a0 buttonType:(long long)a1;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_commonAERoundedCornerButtonInitializationWithStyle:(long long)a0 buttonType:(long long)a1;
- (double)_interpolatedGlyphHorizontalInset;
- (double)_interpolatedGlyphTopInset;

@end
