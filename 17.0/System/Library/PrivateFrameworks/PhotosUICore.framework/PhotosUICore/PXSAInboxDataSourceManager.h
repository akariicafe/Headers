@class PXSAInboxDataSource, PXFeedSectionInfosManager, NSString, PXSAInboxDetailViewControllerProvider, PXSAInboxTitleProvider;
@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelTitleProvider, PXInboxModelMediaProvider;

@interface PXSAInboxDataSourceManager : PXInboxModelDataSourceManager <PXFeedSectionInfosManagerDelegate, PXInboxProviderSource, PXInboxModelMediaProvider>

@property (retain, nonatomic) PXFeedSectionInfosManager *feedSectionInfosManager;
@property (retain, nonatomic) PXSAInboxTitleProvider *sharedAlbumTitleProvider;
@property (retain, nonatomic) PXSAInboxDetailViewControllerProvider *sharedAlbumDetailViewControllerProvider;
@property (readonly, nonatomic) PXSAInboxDataSource *dataSource;
@property (readonly, nonatomic) id<PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (readonly, nonatomic) id<PXInboxModelMediaProvider> mediaProvider;
@property (readonly, nonatomic) id<PXInboxModelTitleProvider> titleProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateDataSource;
- (id)init;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (id)_dataSourceSnapshot;
- (id)providerSource;
- (id)_sectionInfosForDataSource;
- (void)feedSectionInfosManager:(id)a0 sectionInfosDidChange:(id)a1;
- (int)requestImageForPreviewItem:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 resultHandler:(id /* block */)a2;

@end
