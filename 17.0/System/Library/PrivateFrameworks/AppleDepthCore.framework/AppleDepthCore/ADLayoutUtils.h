@interface ADLayoutUtils : NSObject

+ (BOOL)isLandscape:(unsigned long long)a0;
+ (unsigned long long)layoutForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)layoutAsString:(unsigned long long)a0;
+ (BOOL)isLandscapeSize:(struct CGSize { double x0; double x1; })a0;
+ (unsigned long long)transposeLayout:(unsigned long long)a0;
+ (BOOL)aspectRatio:(float)a0 matchesAspectRatio:(float)a1;
+ (float)aspectRatioForKnownLayout:(unsigned long long)a0;

@end
