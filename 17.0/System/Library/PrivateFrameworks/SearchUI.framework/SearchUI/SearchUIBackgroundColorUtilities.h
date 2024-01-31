@class UIColor;

@interface SearchUIBackgroundColorUtilities : NSObject

@property (class, readonly) UIColor *defaultBackgroundColor;

+ (id)colorWithHexString:(id)a0;
+ (BOOL)backgroundColorPrefersWhiteForegroundText:(id)a0;
+ (id)randomColor;
+ (id)averageColorOfUIColors:(id)a0;
+ (void)computeResolvedColoringForColorRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (id)hexStringFromColor:(id)a0;
+ (BOOL)isDefaultUIColorInUIColors:(id)a0;
+ (void)overrideAppearance:(id)a0 onView:(id)a1;
+ (void)resolvedColoringForColorRequest:(id)a0 completionHandler:(id /* block */)a1;
+ (id)rgbCompatibleColorForColor:(id)a0;
+ (double)tintedRGBValueForValue:(double)a0 isLight:(BOOL)a1 colorTintStyle:(int)a2;
+ (id)tintedUIColorsFromUIColors:(id)a0 withColorRequest:(id)a1 tintStyle:(int)a2;

@end
