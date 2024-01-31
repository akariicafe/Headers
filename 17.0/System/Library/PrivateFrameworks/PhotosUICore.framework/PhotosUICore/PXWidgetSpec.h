@interface PXWidgetSpec : PXFeatureSpec

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentGuideInsets;
@property (readonly, nonatomic) unsigned long long detailsOptions;
@property (nonatomic) double distanceBetweenTopAndFirstHeaderBaseline;
@property (nonatomic) double distanceBetweenTopAndHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenHeaderBaselineAndWidgetContentTop;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderBaseline;
@property (nonatomic) double distanceBetweenFooteredWidgetContentBottomAndNextHeaderlessWidgetContentTop;
@property (nonatomic) double distanceBetweenWidgetContentBottomAndFooterBaseline;
@property (nonatomic) double distanceBetweenFooterBaselineAndBottom;
@property (nonatomic) double distanceBetweenFooterlessWidgetContentBottomAndBottom;
@property (nonatomic) double distanceBetweenHeaderTopAndHeaderBaseline;
@property (nonatomic) double distanceBetweenHeaderBaselineAndHeaderBottom;
@property (nonatomic) double distanceBetweenFooterTopAndFooterBaseline;
@property (nonatomic) double distanceBetweenFooterBaselineAndFooterBottom;
@property (readonly, nonatomic) double distanceBetweenMainContentBottomAndCaptionBaseline;
@property (readonly, nonatomic) double distanceBetweenMapViewAndAddressTop;
@property (readonly, nonatomic) struct CGSize { double width; double height; } interWidgetSpacing;

- (id)init;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 detailsOptions:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 detailsOptions:(unsigned long long)a2;

@end
