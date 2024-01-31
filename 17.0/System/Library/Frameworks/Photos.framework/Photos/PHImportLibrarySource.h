@class NSURL, PLPhotoLibraryPathManager, NSDictionary;

@interface PHImportLibrarySource : PHImportUrlSource {
    NSURL *_libraryURL;
    NSDictionary *_renderResourcePathsByIdentifier;
}

@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (BOOL)_isValidPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)importLibrarySourceForURL:(id)a0 exceptions:(id *)a1;
+ (id)supportedImportLibraryTypes;

- (void).cxx_destruct;
- (id)name;
- (BOOL)_isValidPhotoLibraryWithError:(id *)a0;
- (id)_resourcePathsByUuidForPaths:(id)a0;
- (id)assetsByProcessingItem:(id)a0;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (BOOL)canReference;
- (BOOL)containsSupportedMediaWithImportExceptions:(id *)a0;
- (id)initWithUrls:(id)a0;
- (BOOL)isLibrary;
- (void)loadSidecarsFor:(id)a0;
- (id)productKind;

@end
