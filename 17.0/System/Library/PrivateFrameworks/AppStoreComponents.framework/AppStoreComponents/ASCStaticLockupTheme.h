@class NSString, UIColor;

@interface ASCStaticLockupTheme : NSObject <ASCLockupTheme, NSCopying>

@property (class, readonly) ASCStaticLockupTheme *adTheme;
@property (class, readonly) ASCStaticLockupTheme *adWhiteTheme;

@property (copy, nonatomic) NSString *titleTextStyle;
@property (copy, nonatomic) id /* block */ titleFontSizeProvider;
@property (nonatomic) double titleFontWeight;
@property (copy, nonatomic) NSString *subtitleTextStyle;
@property (copy, nonatomic) id /* block */ subtitleFontSizeProvider;
@property (nonatomic) double subtitleFontWeight;
@property (copy, nonatomic) NSString *headingTextStyle;
@property (copy, nonatomic) id /* block */ headingFontSizeProvider;
@property (nonatomic) double headingFontWeight;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) UIColor *headingTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToLockupContentView:(id)a0 compatibleWithTraitCollection:(id)a1;
- (id)headingFontCompatibleWithTraitCollection:(id)a0;
- (id)initWithTitleTextColor:(id)a0 titleFontSizeProvider:(id /* block */)a1 titleFontWeight:(double)a2 subtitleTextColor:(id)a3 subtitleFontSizeProvider:(id /* block */)a4 subtitleFontWeight:(double)a5 headingTextColor:(id)a6 headingFontSizeProvider:(id /* block */)a7 headingFontWeight:(double)a8;
- (id)initWithTitleTextColor:(id)a0 titleTextStyle:(id)a1 titleFontWeight:(double)a2 subtitleTextColor:(id)a3 subtitleTextStyle:(id)a4 subtitleFontWeight:(double)a5 headingTextColor:(id)a6 headingTextStyle:(id)a7 headingFontWeight:(double)a8;
- (id)subtitleFontCompatibleWithTraitCollection:(id)a0;
- (id)titleFontCompatibleWithTraitCollection:(id)a0;

@end
