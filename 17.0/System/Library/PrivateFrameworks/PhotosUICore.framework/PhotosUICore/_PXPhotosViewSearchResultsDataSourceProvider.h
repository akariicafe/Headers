@class NSString, NSArray;

@interface _PXPhotosViewSearchResultsDataSourceProvider : NSObject <PXPhotosDataSourceProvider> {
    NSArray *_assetUUIDs;
    NSString *_title;
    BOOL _reverseSortOrder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateConfiguration:(id)a0 fromDataSourceManager:(id)a1;
- (id)createInitialPhotosDataSourceForDataSourceManager:(id)a0;
- (id)initWithAssetUUIDs:(id)a0 searchTitle:(id)a1 reverseSortOrder:(BOOL)a2;
- (id)loadInitialPhotosDataSourceForDataSourceManager:(id)a0;
- (id)localizedInitialLoadingStatusMessageForDataSourceManager:(id)a0;

@end
