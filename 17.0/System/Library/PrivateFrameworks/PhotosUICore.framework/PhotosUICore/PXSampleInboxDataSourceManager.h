@class NSArray, PXSampleInboxMediaProvider, NSString;
@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelTitleProvider, PXInboxModelMediaProvider;

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager <PXInboxProviderSource, PXInboxModelTitleProvider>

@property (retain, nonatomic) NSArray *mockedModels;
@property (retain, nonatomic) PXSampleInboxMediaProvider *sampleMediaProvider;
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
- (void)_generateModels;
- (void)_changeData;
- (id)_modelElements;
- (void)requestTitleAndSubtitleForModel:(id)a0 completion:(id /* block */)a1;
- (id)subtitleForModel:(id)a0;
- (id)titleForModel:(id)a0;

@end
