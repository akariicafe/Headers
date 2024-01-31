@class PXPhotosDataSource, NSString, PXSuggestionsDataSource, PXForYouSuggestionsAssetsDataSource, NSDictionary, PXSuggestionsDataSourceManager;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver>

@property (readonly, nonatomic) PXSuggestionsDataSourceManager *suggestionsDataSourceManager;
@property (readonly, nonatomic) NSString *collectionIdentifier;
@property (retain, nonatomic) PXSuggestionsDataSource *suggestionsDataSource;
@property (readonly, nonatomic) PXPhotosDataSource *photosDataSource;
@property (readonly, nonatomic) PXForYouSuggestionsAssetsDataSource *dataSource;
@property (readonly, nonatomic) NSDictionary *snapshotAssetToSuggestionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (id)createInitialDataSource;
- (void).cxx_destruct;
- (id)initWithSuggestionsDataSourceManager:(id)a0;

@end
