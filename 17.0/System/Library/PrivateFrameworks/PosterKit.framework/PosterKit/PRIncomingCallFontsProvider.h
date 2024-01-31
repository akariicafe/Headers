@class UIFont;

@interface PRIncomingCallFontsProvider : NSObject

@property (class, readonly, copy, nonatomic) UIFont *defaultNameFont;
@property (class, readonly, copy, nonatomic) UIFont *defaultStatusFont;
@property (class, readonly, nonatomic) double defaultEmphasizedNameFontSize;
@property (class, readonly, nonatomic) double defaultStatusFontSize;
@property (class, readonly, nonatomic) double defaultSecondaryNameFontSize;

+ (id)_cjkFontSizeMap;
+ (BOOL)_canTextBePartiallyRenderedForFont:(id)a0 text:(id)a1;
+ (BOOL)_canTextBePartiallyRenderedForFontRef:(struct __CTFont { } *)a0 text:(id)a1;
+ (BOOL)_canTextBePartiallyRenderedForFontWithName:(id)a0 text:(id)a1;
+ (BOOL)_canTextBePartiallyRenderedForTimeFontIdentifier:(id)a0 text:(id)a1;
+ (double)_deviceBasedFontSizeForSize:(double)a0;
+ (id)_fallbackFontsForFont:(id)a0 displayingText:(id)a1;
+ (id)_preferredLanguageForFont:(struct __CTFont { } *)a0;
+ (id)_renderCompatibleIdentifiersForTimeFontIdentifiers:(id)a0 text:(id)a1;
+ (struct { id x0; id x1; })_sampleFallbackForFont:(id)a0;
+ (struct { id x0; id x1; })_sampleStringForFont:(id)a0;
+ (double)idealTitleFontSizeForText:(id)a0 usingLayout:(unsigned long long)a1;
+ (struct { id x0; id x1; })sampleStringForFont:(id)a0 displayingText:(id)a1;
+ (id)timeFontIdentifiersForText:(id)a0 availableFonts:(id)a1;

@end
