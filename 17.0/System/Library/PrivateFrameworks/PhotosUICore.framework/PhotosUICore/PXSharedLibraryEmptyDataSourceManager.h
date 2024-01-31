@interface PXSharedLibraryEmptyDataSourceManager : PXSharedLibraryDataSourceManager

- (id)fetchPreview;
- (id)createInitialDataSource;
- (id)fetchExiting;
- (void)fetchSharedLibraryForURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchSharedLibrary;

@end
