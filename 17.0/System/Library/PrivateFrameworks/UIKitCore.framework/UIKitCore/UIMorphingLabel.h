@class UIFont, NSString, UIColor, _UIViewAnimationAttributes, UIMorphingLabelGlyphSet, NSMutableArray, UIView;

@interface UIMorphingLabel : UIView {
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    UIView *_colorView;
    unsigned long long _alignmentSrc[100];
    unsigned long long _alignmentDst[100];
    BOOL _alignmentIsEqual[100];
    unsigned long long _alignmentSize;
    double _alignmentDelays[100];
    _UIViewAnimationAttributes *_textAnimationAttributes;
    double _lastUpdateTime;
    double _slowdown;
    double _rippleFactor;
    double _scaleFactor;
    BOOL _isDoingFastAnimation;
    BOOL _textDidChange;
    BOOL _textColorDidChange;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) BOOL suppressLayoutSubviews;
@property (nonatomic) BOOL enableAnimation;
@property (nonatomic) double initialScale;
@property (nonatomic) double glyphScaleAnimationSpeed;
@property (nonatomic) double rippleDuration;

+ (id)preferredFontWithSize:(double)a0;

- (void)baseInit;
- (void)animateGlyph:(id)a0 toScale:(double)a1 delay:(double)a2;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)a0;
- (id)uniqueString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })dstRangeOfAlignmentHunkAtIndex:(unsigned long long)a0;
- (double)flushAmount;
- (void)animateAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)a0;
- (id)attributedStringForText:(id)a0;
- (void)hideGlyph:(id)a0;
- (void)animateHideGlyph:(id)a0 alphaDuration:(double)a1 delay:(double)a2;
- (id)attributedString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)glyphViewWithImage:(id)a0 isColorGlyph:(BOOL)a1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)animateGlyphs;
- (BOOL)_isRTL;
- (double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)initMovementAlignmentHunkAtIndex:(unsigned long long)a0;
- (double)requiredWidthForText:(id)a0;
- (double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)initAlignmentHunkAtIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })srcRangeOfAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)animateGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofGlyphSet:(id)a1 byOffset:(double)a2 delay:(double)a3;
- (void).cxx_destruct;
- (double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)animateGlyph:(id)a0 toPosition:(struct CGPoint { double x0; double x1; })a1 delay:(double)a2;
- (double)alphaForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)a0 fromGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 toGlyphsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)calculateGlyphAlignment;
- (void)animateGlyph:(id)a0 toAlpha:(double)a1 duration:(double)a2 delay:(double)a3;
- (void)animateShowGlyph:(id)a0 alpha:(double)a1 alphaDuration:(double)a2 delay:(double)a3;
- (void)copyStateFromGlyph:(id)a0 toGlyph:(id)a1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)contentSizeDidChange:(id)a0;
- (double)_rippleDurationForEndInsertion:(BOOL)a0;
- (void)animateShowGlyph:(id)a0 alphaDuration:(double)a1 delay:(double)a2;
- (double)currentMediaTime;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)canFitText:(id)a0;

@end
