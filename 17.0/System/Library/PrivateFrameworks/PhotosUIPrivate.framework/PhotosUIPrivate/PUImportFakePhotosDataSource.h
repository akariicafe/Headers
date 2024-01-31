@class PXImportAssetsDataSource;

@interface PUImportFakePhotosDataSource : PXPhotosDataSource

@property (retain, nonatomic) PXImportAssetsDataSource *importDataSource;

- (void)photoLibraryDidChangeOnMainQueue:(id)a0;
- (long long)numberOfItemsInSection:(long long)a0;
- (void)prefetchApproximateAssetsAtIndexPaths:(id)a0 reverseOrder:(BOOL)a1;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (id)initWithImportDataSource:(id)a0 photoLibrary:(id)a1;
- (id)prepareForPhotoLibraryChange:(id)a0;

@end
