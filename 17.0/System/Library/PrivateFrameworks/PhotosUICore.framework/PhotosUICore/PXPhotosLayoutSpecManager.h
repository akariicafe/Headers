@class NSArray, PXPhotosLayoutSpec, PXPhotosHeaderCustomizationModel;

@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXPhotosLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long gridStyle;
@property (readonly, nonatomic) BOOL sectionHeadersEnabled;
@property (readonly, nonatomic) PXPhotosHeaderCustomizationModel *headerCustomizationModel;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 enableSectionHeaders:(BOOL)a2;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (void).cxx_destruct;
- (Class)specClass;
- (id)createSpec;

@end
