@interface SXFontMatching : NSObject

+ (long long)bestStyleForIntendedStyle:(long long)a0 forFonts:(id)a1;
+ (long long)bestWeightForIntendedWeight:(long long)a0 forFonts:(id)a1;
+ (long long)bestWidthForIntendedWidth:(long long)a0 forFonts:(id)a1;
+ (long long)bolderWeightForWeight:(long long)a0;
+ (id)fontFaceWithAttributes:(id)a0 fromFamily:(id)a1;
+ (long long)lighterWeightForWeight:(long long)a0;
+ (id)matchFontFaceForAttributes:(id)a0 fromFamily:(id)a1;

@end
