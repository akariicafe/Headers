@class UIFont;

@interface CUIKORFontUtils : NSObject

@property (class, readonly, nonatomic) UIFont *defaultOccurrenceSecondaryTextFont;

+ (id)defaultOccurrencePrimaryTextFontForSizeClass:(long long)a0;
+ (id)defaultOccurrenceSmallPrimaryTextFontForSizeClass:(long long)a0;
+ (double)minimumNaturalHeightForPrimaryTextUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (double)_minimumPrimaryFontLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;
+ (id)_primaryTextFontCache;
+ (double)attributedStringMinimumLineHeightUsingSmallText:(BOOL)a0 sizeClass:(long long)a1;

@end
