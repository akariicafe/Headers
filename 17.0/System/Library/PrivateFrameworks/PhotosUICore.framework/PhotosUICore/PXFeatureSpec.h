@class PXExtendedTraitCollection, UIColor, PXLayoutMetricInterpolator, NSArray, NSCache;

@interface PXFeatureSpec : NSObject

@property (readonly, nonatomic) double spacingBetweenYearCards;
@property (readonly, nonatomic) double spacingBetweenMonthCards;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } curatedLibraryEdgeToEdgeContentDefaultPadding;
@property (readonly, nonatomic) NSCache *_viewSpecCache;
@property (readonly, nonatomic) PXLayoutMetricInterpolator *_horizontalContentGuideInsetsInterpolator;
@property (readonly, nonatomic) BOOL _shouldUseMiniMargins;
@property (readonly, nonatomic) PXExtendedTraitCollection *rootExtendedTraitCollection;
@property (readonly, nonatomic) long long localizedLeadingTextAlignment;
@property (readonly, nonatomic) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) long long sizeClass;
@property (readonly, nonatomic) long long sizeSubclass;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) long long layoutDirection;
@property (readonly, nonatomic) struct CGSize { double width; double height; } layoutReferenceSize;
@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) long long userInterfaceFeature;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long userInterfaceLevel;
@property (readonly, nonatomic) long long contentSizeCategory;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } layoutMargins;
@property (readonly, nonatomic) double displayScale;
@property (readonly, nonatomic) long long windowOrientation;
@property (readonly, nonatomic) UIColor *defaultBackgroundColor;
@property (readonly, nonatomic) double defaultCornerRadius;
@property (readonly, nonatomic) double defaultDarkenSourceOverAmount;
@property (readonly, nonatomic) UIColor *defaultPlaceholderColor;
@property (readonly, nonatomic) UIColor *defaultPlacesPlaceholderColor;
@property (readonly, nonatomic) NSArray *collectionTileImageOverlaySpecs;
@property (readonly, nonatomic) NSArray *collectionTileImageOverlaySpecsHighlighted;
@property (readonly, nonatomic) double collectionTileImageCornerRadius;
@property (readonly, nonatomic) BOOL shouldInsetAllPhotoDetailsContent;

- (id)init;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0;
- (void).cxx_destruct;
- (id)_textAttributesForFontName:(id)a0 fontSize:(double)a1 lineHeight:(double)a2 tracking:(double)a3 stroke:(double)a4;
- (id)collectionTileImageOverlayColor;
- (long long)_capitalizationStyleFromTextAttributes:(id)a0 defaultCapitalizationStyle:(long long)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_fullscreenContentInsetsForWidth:(double)a0;
- (id)collectionTileImageOverlayColorHighlighted;
- (void)configureViewSpec:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentGuideInsetsForScrollAxis:(long long)a0;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0;
- (id)fullscreenMiroViewSpec;
- (id)fullscreenMiroViewSpecWithBoundingSize:(struct CGSize { double x0; double x1; })a0;
- (id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0;

@end
