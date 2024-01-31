@class CLKUICurvedLabel, UIView;

@interface CLKUICurvedColoringLabel : CLKUIColoringLabel {
    CLKUICurvedLabel *_curvedLabel;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) BOOL interior;
@property (nonatomic) double centerAngle;
@property (nonatomic) double maxAngularWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textBoundingRect;
@property (nonatomic) unsigned long long imagePlacement;
@property (nonatomic) double imagePadding;
@property (weak, nonatomic) UIView *imageView;
@property (nonatomic) struct CGSize { double x0; double x1; } imageViewOverrideSize;

- (id)color;
- (void)traitCollectionDidChange:(id)a0;
- (void)setAttributedText:(id)a0;
- (double)maxWidth;
- (id)textColor;
- (void)sizeToFit;
- (void)setNumberOfLines:(long long)a0;
- (long long)numberOfLines;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)alpha;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)font;
- (void)setAlpha:(double)a0;
- (id)attributedText;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setColor:(id)a0;
- (void)setTracking:(double)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)setMaxWidth:(double)a0;
- (void)layoutSubviews;
- (void)setTextColor:(id)a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_firstLineBaseline;
- (double)_lastLineBaseline;
- (void)invalidateCachedSize;
- (void)setImageView:(id)a0 placement:(unsigned long long)a1 padding:(double)a2;
- (void)getTextCenter:(struct CGPoint { double x0; double x1; } *)a0 startAngle:(double *)a1 endAngle:(double *)a2;
- (void)setUsesTextProviderTintColoring:(BOOL)a0;
- (BOOL)isTextTruncated;
- (void)_setAnimationAlpha:(double)a0;
- (void)_setUpSnapshot;
- (struct CGPoint { double x0; double x1; })centerForImage;
- (void)setTextProviderFont:(id)a0;
- (BOOL)textDefinesTruncation;
- (id)textProviderFont;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForImage;

@end
