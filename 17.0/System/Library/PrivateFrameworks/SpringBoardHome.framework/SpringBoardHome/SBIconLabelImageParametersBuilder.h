@class UIColor, NSString, UIFont, SBIcon, SBIconView, _UILegibilitySettings;
@protocol SBIconListLayoutProvider;

@interface SBIconLabelImageParametersBuilder : NSObject {
    BOOL _hasSetTextInsets;
}

@property (copy, nonatomic) NSString *text;
@property (readonly, nonatomic) SBIcon *icon;
@property (retain, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) Class iconViewClass;
@property (readonly, nonatomic) NSString *iconLocation;
@property (retain, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } iconImageSize;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isAccessibilityReduceTransparencyEnabled) BOOL accessibilityReduceTransparencyEnabled;
@property (copy, nonatomic) NSString *contentSizeCategory;
@property (retain, nonatomic) UIColor *focusHighlightColor;
@property (nonatomic) double scale;
@property (nonatomic) long long labelAccessoryType;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textInsets;
@property (retain, nonatomic) NSString *overrideText;

+ (id)defaultFontForContentSizeCategory:(id)a0 languageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForFont:(id)a0;
+ (long long)_fontSizeParameterForContentSizeCategory:(id)a0;
+ (double)_normalFontSizeForSizeParameter:(long long)a0;

- (id)init;
- (id)_fontWithLanguageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a0;
- (struct CGSize { double x0; double x1; })_maxSize;
- (id)buildParameters;
- (void)setIcon:(id)a0 forLocation:(id)a1;
- (BOOL)_hasValidInputs;
- (void)setIcon:(id)a0;
- (id)listLayout;
- (void).cxx_destruct;
- (BOOL)_canTightenLabel;
- (BOOL)_canTruncateLabel;

@end
