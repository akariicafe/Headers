@class NSDictionary, UIFont;

@interface PXStoryTVCellSpec : PXFeatureSpec

@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *subtitleFont;
@property (readonly, nonatomic) NSDictionary *titleSupportedCharactersAttributes;
@property (readonly, nonatomic) NSDictionary *titleUnsupportedCharactersAttributes;
@property (readonly, nonatomic) NSDictionary *subtitleSupportedCharactersAttributes;
@property (readonly, nonatomic) NSDictionary *subtitleUnsupportedCharactersAttributes;
@property (readonly, nonatomic) UIFont *memoryTitleFont;
@property (readonly, nonatomic) double memoryTitleLeading;
@property (readonly, nonatomic) double memoryTitleTracking;
@property (readonly, nonatomic) UIFont *memorySubtitleFont;
@property (readonly, nonatomic) double memorySubtitleLeading;
@property (readonly, nonatomic) double memorySubtitleTracking;

- (id)initWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)_setupTitleFont;
- (BOOL)_isSupportedCharacterSetForFontDescriptor:(id)a0 fontSize:(double)a1 string:(id)a2 supportedCharacterAttributes:(id)a3 leading:(double)a4;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_languageAwareOutsetsForFont:(id)a0;
- (id)_setupSubtitleAttributesWithAllCharactersSupported:(BOOL)a0;
- (id)_setupSubtitleFont;
- (id)_setupTitleAttributesWithAllCharactersSupported:(BOOL)a0;
- (id)attributedStringForSubtitle:(id)a0;
- (id)attributedStringForTitle:(id)a0;

@end
