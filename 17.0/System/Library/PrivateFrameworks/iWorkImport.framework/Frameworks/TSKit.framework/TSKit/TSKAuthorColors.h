@class NSString, TSUColor;

@interface TSKAuthorColors : NSObject {
    TSUColor *_storageColor;
}

@property (readonly, nonatomic) TSUColor *storageColor;
@property (readonly, nonatomic) TSUColor *popoverAuthorLabelColor;
@property (readonly, nonatomic) TSUColor *popoverButtonTintColor;
@property (readonly, nonatomic) TSUColor *textMarkupColor;
@property (readonly, nonatomic) TSUColor *textHighlightColor;
@property (readonly, nonatomic) TSUColor *textHighlightOverlappingDuplicateColor;
@property (readonly, nonatomic) TSUColor *cellViolatorColor;
@property (readonly, nonatomic) TSUColor *flagStrokeColor;
@property (readonly, nonatomic) TSUColor *flagPressedColor;
@property (readonly, nonatomic) TSUColor *changeAdornmentsColor;
@property (readonly, nonatomic) TSUColor *flagFillColor;
@property (readonly, nonatomic) TSUColor *popoverColor;
@property (readonly, nonatomic) TSUColor *sidebarDecoratorLineColor;
@property (readonly, nonatomic) TSUColor *sidebarHoverColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedColor;
@property (readonly, nonatomic) TSUColor *sidebarUsernameColor;
@property (readonly, nonatomic) TSUColor *sidebarChangeBarColor;
@property (readonly, nonatomic) TSUColor *sidebarSelectedBorderColor;
@property (readonly, nonatomic) TSUColor *gradientStartColor;
@property (readonly, nonatomic) TSUColor *gradientEndColor;
@property (readonly, nonatomic) TSUColor *indicatorLightColor;
@property (readonly, nonatomic) TSUColor *indicatorDarkColor;
@property (readonly, nonatomic) NSString *authorColorName;
@property (readonly, nonatomic) TSUColor *menuSwatchColorForAuthor;
@property (readonly, nonatomic) NSString *themeFilenameForAuthor;

+ (id)authorStorageColorForIndex:(unsigned long long)a0;
+ (id)authorTextMarkupColorForIndex:(unsigned long long)a0;
+ (unsigned long long)presetColorCount;
+ (id)indicatorDarkColorByLightColor:(id)a0;
+ (unsigned long long)authorColorIndexClosestToImportedFloatingCommentColor:(id)a0;
+ (id)authorMenuSwatchColorForIndex:(unsigned long long)a0;
+ (id)indicatorDarkColorForIndex:(unsigned long long)a0;
+ (id)indicatorLightColorByAuthorColor:(id)a0;
+ (id)indicatorLightColorForIndex:(unsigned long long)a0;
+ (id)localizedAuthorColorNameForIndex:(unsigned long long)a0;
+ (id)p_authorColorDictionaryForAuthorIndex:(unsigned long long)a0;
+ (id)p_authorColorForIndex:(unsigned long long)a0 forKey:(id)a1;
+ (unsigned long long)p_authorColorIndexWithColor:(id)a0 forIndicator:(BOOL)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)p_authorColorIndex;
- (id)initWithAuthorStorageColor:(id)a0;

@end
