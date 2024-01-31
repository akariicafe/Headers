@interface ASCAdTransparencyButtonView : UIButton

+ (id)titleColor;
+ (id)adButtonTitleLocalized;
+ (id)adTransparencyButtonImage;
+ (id)buttonFontCompatibleWithTraitColletion:(id)a0;
+ (id)selectedTitleColor;

- (void)setLoading:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)updateFont;
- (void)onPreferredContentSizeCategoryChange;
- (void)updateInsets;

@end
