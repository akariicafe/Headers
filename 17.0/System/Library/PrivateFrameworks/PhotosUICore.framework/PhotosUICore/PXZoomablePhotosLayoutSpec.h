@class NSArray, PXZoomableInlineHeadersLayoutSpec;

@interface PXZoomablePhotosLayoutSpec : PXFeatureSpec

@property (readonly, nonatomic) long long defaultNumberOfColumns;
@property (readonly, nonatomic) long long initialNumberOfColumns;
@property (readonly, nonatomic) long long staticNumberOfColumns;
@property (readonly, nonatomic) long long maxColumnsForIndividualItems;
@property (readonly, nonatomic) long long maxColumnsForBadges;
@property (readonly, nonatomic) long long minColumnsForMiniBadges;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) long long maxColumnsForStickyHeaderDisplay;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } aspectFitEdgeMargins;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } squareEdgeMargins;
@property (readonly, nonatomic) double aspectFitInteritemSpacing;
@property (readonly, nonatomic) double panoramaItemAspectRatio;
@property (readonly, nonatomic) double panoramaInteritemSpacing;
@property (readonly, nonatomic) double itemAspectRatio;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) BOOL useSaliency;
@property (readonly, nonatomic) long long maxColumnsForSaliency;
@property (readonly, nonatomic) NSArray *supportedColumns;
@property (readonly, nonatomic) NSArray *minimumAssetsRequiredByColumn;
@property (readonly, nonatomic) NSArray *legacyMacSupportedColumns;
@property (readonly, nonatomic) double captionSpacing;
@property (readonly, nonatomic) PXZoomableInlineHeadersLayoutSpec *inlineHeadersSpec;
@property (readonly, nonatomic) long long preferredUserInterfaceStyle;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 availableThumbnailSizes:(id)a2 gridStyle:(long long)a3 itemAspectRatio:(double)a4 userDefaults:(id)a5 forceSaliency:(BOOL)a6 preferredUserInterfaceStyle:(long long)a7 additionalAspectFitEdgeMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a8 overrideDefaultNumberOfColumns:(long long)a9;
- (void).cxx_destruct;
- (long long)bestColumnIndexForPreferredNumberOfColumns:(long long)a0 allowedColumns:(id)a1;

@end
