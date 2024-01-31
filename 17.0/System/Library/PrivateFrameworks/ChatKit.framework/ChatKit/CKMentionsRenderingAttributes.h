@class UIColor;

@interface CKMentionsRenderingAttributes : NSObject

@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) UIColor *shadowColor;
@property (nonatomic) double scale;

+ (id)newWithValuesFromRippler:(id)a0 timeIndex:(unsigned long long)a1 glyphIndex:(unsigned long long)a2 glyphCount:(unsigned long long)a3;

- (void).cxx_destruct;
- (void)_applyInContext:(struct CGContext { } *)a0 fontPointSize:(double)a1 getAdjustedFontSize:(double *)a2;
- (id)_shadowIfNeededForFontPointSize:(double)a0;
- (id)initWithColor:(id)a0 shadowColor:(id)a1 scale:(double)a2;
- (id)initWithValuesFromRippler:(id)a0 timeIndex:(unsigned long long)a1 glyphIndex:(unsigned long long)a2 glyphCount:(unsigned long long)a3;

@end
