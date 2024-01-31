@class PXPhotosViewModel, NSString;
@protocol PXPhotosSectionHeaderLayoutProviderInvalidationDelegate, PXPhotosSectionHeaderLayoutViewProvider, PXPhotosBannerProvider;

@interface PXPhotosKeyAssetSectionHeaderLayoutProvider : NSObject <PXPhotosSectionHeaderLayoutProvider>

@property (readonly, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, weak, nonatomic) id<PXPhotosSectionHeaderLayoutViewProvider> viewProvider;
@property (readonly, nonatomic) id<PXPhotosBannerProvider> bannerProvider;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> invalidationDelegate;
@property (weak, nonatomic) id<PXPhotosSectionHeaderLayoutProviderInvalidationDelegate> topHeaderInvalidationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)createSectionHeaderLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outAlignment:(unsigned long long *)a4;
- (id)initWithViewModel:(id)a0 viewProvider:(id)a1 bannerProvider:(id)a2;
- (void)sectionedLayout:(id)a0 headerLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;

@end
