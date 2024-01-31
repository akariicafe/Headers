@class UITraitCollection;

@interface TPSAppearance : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) double sizeToScreenRatio;
@property (nonatomic) unsigned long long mediaSizeType;
@property (readonly, nonatomic) double displayScale;
@property (retain, nonatomic) UITraitCollection *traitCollection;

+ (id)language;
+ (double)buttonHeight;
+ (id)boldTextFont;
+ (BOOL)isPhoneUI;
+ (id)bodyFont;
+ (id)footnoteFont;
+ (BOOL)isMacUI;
+ (id)preferredFontForTextStyle:(id)a0;
+ (id)defaultBackgroundColor;
+ (id)secondaryLabelColor;
+ (id)systemFontOfSize:(double)a0 weight:(double)a1;
+ (id)titleLabelFont;
+ (id)secondaryBackgroundColor;
+ (id)headlineFont;
+ (id)subheadlineFont;
+ (id)defaultLabelColor;
+ (id)defaultTextLabelFont;
+ (double)displayMultiplier;
+ (id)footnoteBoldTextFont;
+ (id)footnoteItalicTextFont;
+ (double)introOutroTitleTopPadding;
+ (id)italicTextFont;
+ (id)preferredFontForTextStyle:(id)a0 languageCode:(id)a1;
+ (id)preferredFontForTextStyle:(id)a0 symoblicTraits:(unsigned int)a1 languageCode:(id)a2;

- (double)displayScale;
- (void).cxx_destruct;
- (BOOL)isCompactLayout;
- (double)displayMultiplierWithValue:(double)a0;
- (double)heightToWidthRatioFromSizes:(id)a0 mediaSizeType:(unsigned long long)a1 defaultValue:(double)a2;
- (id)initAppearanceWithTraits:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (double)nativeSizeForValue:(double)a0;
- (BOOL)sideAppMode;
- (struct CGSize { double x0; double x1; })sizeWithSizes:(id)a0 mediaSizeType:(unsigned long long)a1;
- (void)updateAppearanceWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateMediaSizeType;

@end
