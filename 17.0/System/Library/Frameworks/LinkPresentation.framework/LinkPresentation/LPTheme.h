@class LPTapToLoadViewStyle, LPPointUnit, LPVisualMediaViewStyle, UIFont, LPCaptionBarStyle, LPContactsBadgeStyle, NSString, LPAppearanceDependentValue, LPQuotedTextViewStyle, LPLinkRendererSizeClassParameters, LPImageViewStyle, UIColor;

@interface LPTheme : NSObject {
    long long _style;
    unsigned long long _sizeClass;
    LPLinkRendererSizeClassParameters *_sizeClassParameters;
    long long _platform;
    BOOL _isFallbackIcon;
    BOOL _hasButton;
    double _leadingScalingFactor;
    NSString *_preferredContentSizeCategory;
}

@property (retain, nonatomic) LPPointUnit *cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) LPAppearanceDependentValue *highlightCompositingFilter;
@property (nonatomic) long long backgroundMaterial;
@property (readonly, nonatomic) LPCaptionBarStyle *captionBar;
@property (readonly, nonatomic) LPQuotedTextViewStyle *quotedText;
@property (readonly, nonatomic) LPImageViewStyle *mediaImage;
@property (readonly, nonatomic) LPImageViewStyle *placeholderImage;
@property (readonly, nonatomic) LPVisualMediaViewStyle *mediaVideo;
@property (retain, nonatomic) UIColor *mediaBackgroundColor;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaTopCaptionBar;
@property (readonly, nonatomic) LPCaptionBarStyle *mediaBottomCaptionBar;
@property (readonly, nonatomic) LPTapToLoadViewStyle *tapToLoad;
@property (readonly, nonatomic) UIFont *domainNameIndicatorFont;
@property (readonly, nonatomic) UIFont *domainNameIndicatorIconFont;
@property (readonly, nonatomic) LPImageViewStyle *backgroundImage;
@property (readonly, nonatomic) LPContactsBadgeStyle *contactsBadgeStyle;
@property (retain, nonatomic) LPPointUnit *maximumWidth;
@property (nonatomic) double widthFractionForTallMedia;

+ (void)addClient:(id)a0;
+ (void)removeClient:(id)a0;
+ (id)secondaryLabelColor;
+ (id)primaryLabelColor;
+ (double)badgeIconSizeInPoints;
+ (id)iconPlatterCornerRadius;
+ (id)iconPlatterPaddingForReason:(long long)a0;
+ (void)invalidateThemeCache;
+ (double)largestIconSizeInPoints;
+ (long long)platformForView:(id)a0;
+ (id)regularTheme;
+ (id)themeWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 sizeClassParameters:(id)a4 hasButton:(BOOL)a5 preferredContentSizeCategory:(id)a6;

- (id)valueForUndefinedKey:(id)a0;
- (void).cxx_destruct;
- (id)CSSTextForProperty:(id)a0 withValue:(id)a1;
- (id)CSSTextForThemeProperty:(id)a0;
- (void)adjustForStyle;
- (id)initWithStyle:(long long)a0 icon:(id)a1 platform:(long long)a2 sizeClass:(unsigned long long)a3 sizeClassParameters:(id)a4 hasButton:(BOOL)a5 preferredContentSizeCategory:(id)a6;
- (id)valueForThemeProperty:(id)a0;

@end
