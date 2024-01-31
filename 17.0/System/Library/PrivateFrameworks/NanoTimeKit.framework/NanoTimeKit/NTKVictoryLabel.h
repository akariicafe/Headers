@class UIColor;

@interface NTKVictoryLabel : CLKUIColoringLabel

@property (retain, nonatomic) NTKVictoryLabel *outlineLabel;
@property (nonatomic) BOOL requiresDrawingRectAdjustments;
@property (nonatomic) double additionalPaddingInsets;
@property (nonatomic) struct CGVector { double dx; double dy; } drawingRectOffset;
@property (retain, nonatomic) UIColor *outlineColor;
@property (nonatomic) double outlineAlpha;

+ (id)fontDescriptorWithVictoryStyle:(unsigned long long)a0;
+ (id)loadFonts:(double)a0 style:(unsigned long long)a1 monospacedNumbers:(BOOL)a2;
+ (id)victoryFontWithSize:(double)a0 style:(unsigned long long)a1;
+ (id)victoryFontWithSize:(double)a0 style:(unsigned long long)a1 monospacedNumbers:(BOOL)a2;

- (void)setFillColor:(id)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAttributedText:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)sizeToFit;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_applyDrawingOffsetForTextIfNeeded:(id)a0;
- (void)_layoutOutlineLabelIfNeeded;
- (BOOL)_shouldHideOutlineLabel;
- (id)outlinedLabelAttributedStringFromAttributedString:(id)a0;
- (void)setFillColor:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setOutlineColor:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
