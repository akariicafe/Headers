@class NSString, UIFont, UIImage;

@interface _CertInfoGradientLabel : UIView {
    NSString *_text;
    UIFont *_font;
    UIImage *_checkImage;
    struct CGColor { } *_patternColor;
}

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithTrusted:(BOOL)a0;

@end
