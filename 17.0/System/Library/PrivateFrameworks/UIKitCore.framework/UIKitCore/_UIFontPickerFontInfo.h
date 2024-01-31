@class NSNumber, NSString, NSArray, UIImage, UIFontDescriptor, NSAttributedString;

@interface _UIFontPickerFontInfo : NSObject {
    NSString *_localizedFamilyName;
    NSString *_localizedStyleName;
    NSString *_localizedFullName;
    double _lineHeight;
    UIFontDescriptor *_fontDescriptor;
    NSAttributedString *_attributedString;
    NSString *_attributedStringContentSize;
    NSString *_preferredShortPreviewString;
    NSNumber *_previewStringContainsArabic;
    UIImage *_previewImage;
    NSString *_previewImageContentSize;
    double _previewImageDisplayScale;
    BOOL _previewImageUsesSingleCharacter;
    unsigned long long _hasMultipleFaces;
    NSArray *_subInfos;
    BOOL _isSystemFont;
    NSNumber *_canRenderName;
}

@property (readonly) NSString *familyName;
@property (readonly) NSString *postscriptName;
@property (readonly) NSString *styleName;
@property (readonly) NSString *fontName;
@property (readonly) double lineHeight;
@property (readonly) NSAttributedString *attributedString;
@property (readonly) NSString *localizedName;
@property (readonly) NSString *localizedFullName;
@property (readonly) NSString *localizedFamilyName;
@property (readonly) BOOL fontCanRenderLocalizedName;
@property (readonly) NSString *preferredShortPreviewString;
@property (readonly) UIImage *previewImage;
@property (nonatomic) BOOL previewImagePrefersSingleCharacter;
@property (readonly) UIFontDescriptor *fontDescriptor;
@property (readonly, getter=isFontFamilyAvailable) BOOL fontFamilyAvailable;
@property (readonly) BOOL hasMultipleFaces;
@property (readonly) NSArray *faces;
@property (readonly) _UIFontPickerFontInfo *familyInfo;
@property (readonly) BOOL isSystemFont;

+ (id)infoWithFamilyName:(id)a0;
+ (id)infoWithFontDescriptor:(struct __CTFontDescriptor { } *)a0;
+ (id)infoWithName:(id)a0;

- (unsigned long long)hash;
- (BOOL)matchesConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)matchesFamilyForFontDescriptor:(id)a0;
- (void)_updateAttributedStringIfNeeded;
- (void)_createPreviewImage:(id)a0;
- (id)_fontStringForTraitCollection:(id)a0;
- (BOOL)_hasMultipleFacesForFamily;
- (void)_populateLocalizedNamesIfNecessary;
- (id)_sortedFacesByWeight;
- (void)_updatePreviewImageIfNeeded;
- (id)displayNameForFont:(id)a0;
- (id)faceMatchingDescriptor:(id)a0;
- (id)initWithFamilyName:(id)a0;
- (id)initWithFontDescriptor:(id)a0;
- (id)initWithFontDescriptor:(id)a0 isSystemFont:(BOOL)a1;
- (id)initWithSystemDefaultFont;
- (BOOL)matchesClientFontContext:(id)a0;
- (BOOL)matchesFamilyName:(id)a0;
- (BOOL)matchesFontDescriptor:(id)a0;
- (BOOL)matchesLanguages:(id)a0;
- (BOOL)matchesSearchString:(id)a0;
- (BOOL)matchesTraits:(unsigned int)a0;
- (void)setHasMultipleFaces:(BOOL)a0;

@end
