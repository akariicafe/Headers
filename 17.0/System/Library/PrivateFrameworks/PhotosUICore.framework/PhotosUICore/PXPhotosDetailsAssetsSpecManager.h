@class PXPhotosDetailsAssetsSpec;

@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXPhotosDetailsAssetsSpec *spec;
@property (readonly, nonatomic) unsigned long long detailsOptions;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (Class)specClass;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)a0 detailsOptions:(unsigned long long)a1;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 detailsOptions:(unsigned long long)a2;

@end
