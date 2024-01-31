@interface SKUILinkButton : UIButton

@property (readonly, nonatomic) long long arrowStyle;

+ (id)buttonWithArrowStyle:(long long)a0;

- (void)tintColorDidChange;
- (void)sizeToFit;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (double)_linkImagePaddingLeft;
- (void)_reloadIcons;
- (id)initWithArrowStyle:(long long)a0;

@end
