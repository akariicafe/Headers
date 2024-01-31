@class UIColor, NSString;

@interface CLKUILegibilityLabel : UILabel <CLKUILegibilityView> {
    double _sBlur;
    UIColor *_sColor;
}

@property (nonatomic) BOOL legibilityEnabled;
@property (nonatomic) double shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateShadow;
- (id)shadowColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsetsFromFonts;
- (void)setShadowColor:(id)a0;
- (void).cxx_destruct;
- (double)shadowBlur;
- (void)setShadowBlur:(double)a0;

@end
