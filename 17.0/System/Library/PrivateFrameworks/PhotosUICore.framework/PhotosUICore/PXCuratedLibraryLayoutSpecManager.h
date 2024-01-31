@class NSArray, PXCuratedLibraryLayoutSpec;

@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) PXCuratedLibraryLayoutSpec *spec;
@property (retain, nonatomic) NSArray *availableThumbnailSizes;
@property (nonatomic) long long variant;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (BOOL)shouldUpdateSpecForExtendedTraitCollection:(id)a0 change:(unsigned long long)a1;
- (void).cxx_destruct;
- (Class)specClass;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 variant:(long long)a2;
- (id)createSpec;

@end
