@class UIColor;

@interface _EMKGlyphRenderingAttributes : NSObject

@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) UIColor *shadowColor;
@property (nonatomic) double scale;

- (void).cxx_destruct;
- (id)initWithColor:(id)a0 shadowColor:(id)a1 scale:(double)a2;
- (id)shadowIfNeededForFontPointSize:(double)a0;
- (void)_applyInContext:(struct CGContext { } *)a0 fontPointSize:(double)a1;
- (id)initWithValuesFromRippler:(id)a0 timeIndex:(unsigned long long)a1 glyphIndex:(unsigned long long)a2 numberOfGlyphs:(unsigned long long)a3;

@end
