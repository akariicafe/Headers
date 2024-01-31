@class UIColor, UIFont, NSDictionary, NSTextStorage, NSTextContainer, NSLayoutManager;

@interface PKCurvedTextLabel : UILabel {
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _textWidth;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedBounds;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedGlyphsBoundingRect;
    struct CGSize { double width; double height; } _cachedSize;
    BOOL _cachedSizeIsValid;
    UIColor *_textColor;
    UIFont *_font;
    BOOL _hasMonospacedNumbers;
}

@property (nonatomic) double circleRadius;
@property (nonatomic) BOOL interior;
@property (nonatomic) double centerAngle;
@property (nonatomic) double maxAngularWidth;
@property (readonly, copy, nonatomic) NSDictionary *textAttributes;
@property (readonly, nonatomic) double linearWidth;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } textBoundingRect;

- (id)init;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAttributedText:(id)a0;
- (id)textColor;
- (void)setNumberOfLines:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)font;
- (id)attributedText;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)setTextColor:(id)a0;
- (void)setFont:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_distance;
- (void)_updateTextColor;
- (struct __CTLine { } *)_newLineFromDrawableTextStorage;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_drawableCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (void)_enumerateTransformsForDrawableCharacters:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_glyphsBoundingRect;
- (struct CGPoint { double x0; double x1; })_offsetOfBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateMaxSize;
- (void)invalidateCachedSize;

@end
