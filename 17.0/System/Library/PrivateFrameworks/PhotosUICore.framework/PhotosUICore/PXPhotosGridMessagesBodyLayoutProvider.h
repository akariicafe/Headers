@class PXPhotosGridMessagesLayoutSpecManager, NSString;
@protocol PXPhotosSectionBodyLayoutProviderInvalidationDelegate, PXAssetImportStatusManager, PXTapbackStatusManager;

@interface PXPhotosGridMessagesBodyLayoutProvider : NSObject <PXGItemsLayoutDelegate, PXChangeObserver, PXPhotosSectionBodyLayoutProvider>

@property (readonly, nonatomic) PXPhotosGridMessagesLayoutSpecManager *specManager;
@property (readonly, nonatomic) id<PXTapbackStatusManager> tapbackStatusManager;
@property (readonly, nonatomic) id<PXAssetImportStatusManager> assetImportStatusManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosSectionBodyLayoutProviderInvalidationDelegate> invalidationDelegate;

- (void)configureSectionBodyLayout:(id)a0 inAssetSectionLayout:(id)a1 forSectionedLayout:(id)a2;
- (id)initWithViewModel:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)itemsLayout:(id)a0 itemForObjectReference:(id)a1 options:(unsigned long long)a2;
- (id)createSectionBodyLayoutForSectionedLayout:(id)a0 dataSource:(id)a1 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a2 spec:(id)a3 outWantsDecoration:(BOOL *)a4;
- (void)sectionedLayout:(id)a0 bodyLayout:(id)a1 didChangeDataSource:(id)a2 sectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a3 hasSectionChanges:(BOOL)a4;
- (void).cxx_destruct;
- (id)itemsLayout:(id)a0 objectReferenceForItem:(long long)a1;
- (BOOL)shouldPreventFaultOutOfBodyLayout:(id)a0 inAssetSectionLayout:(id)a1;
- (double)itemsLayout:(id)a0 aspectRatioForItem:(long long)a1;
- (struct CGSize { double x0; double x1; })itemsLayout:(id)a0 marginForItem:(long long)a1;

@end
