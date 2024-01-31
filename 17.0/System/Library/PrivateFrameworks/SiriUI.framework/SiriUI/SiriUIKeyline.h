@class UIColor, UIView;

@interface SiriUIKeyline : UIView {
    UIView *_keyLineView;
}

@property (nonatomic, getter=_isVeritical, setter=_setVertical:) BOOL veritical;
@property (nonatomic) long long keylineType;
@property (nonatomic) double customLeftPadding;
@property (nonatomic) double customRightPadding;
@property (retain, nonatomic) UIColor *customBackgroundColor;

+ (id)keyline;
+ (id)verticalKeyline;
+ (id)keylineForSelectableRow;
+ (id)keylineWithDefaultInsets;
+ (id)keylineWithKeylineType:(long long)a0;
+ (id)keylineWithKeylineType:(long long)a0 platterStyling:(BOOL)a1;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_keylineColorForType:(long long)a0 platterStyling:(BOOL)a1;
- (double)_keylineThicknessForType:(long long)a0;
- (struct CGSize { double x0; double x1; })_sizeThatFits:(struct CGSize { double x0; double x1; })a0 useAutolayout:(BOOL)a1;
- (id)initWithKeylineType:(long long)a0;
- (id)initWithKeylineType:(long long)a0 platterStyling:(BOOL)a1;

@end
