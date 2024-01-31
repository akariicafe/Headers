@class NSArray, PXZoomablePhotosLayoutSpec;
@protocol PXZoomablePhotosUserDefaults;

@interface PXZoomablePhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXZoomablePhotosLayoutSpec *spec;
@property (retain, nonatomic) id<PXZoomablePhotosUserDefaults> userDefaults;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long gridStyle;
@property (nonatomic) double itemAspectRatio;
@property (nonatomic) long long preferredUserInterfaceStyle;
@property (nonatomic) BOOL forceSaliency;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } additionalAspectFitEdgeMargins;
@property (nonatomic) long long overrideDefaultNumberOfColumns;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void)setPreferredUserInterfaceStyleForInlineAddButton:(long long)a0;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (void).cxx_destruct;
- (Class)specClass;
- (id)createSpec;

@end
