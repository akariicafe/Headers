@class PLPhotoLibrary, NSFileManager, PLPhotoLibraryBundle, PLInterLibraryTransferOptions;

@interface PLInterLibraryTransfer : NSObject

@property (retain) PLPhotoLibraryBundle *sourceBundle;
@property (retain) PLPhotoLibraryBundle *destinationBundle;
@property (retain) PLPhotoLibrary *sourceLibrary;
@property (retain) PLPhotoLibrary *destinationLibrary;
@property (retain) PLInterLibraryTransferOptions *options;
@property (retain) NSFileManager *fileManager;

- (void).cxx_destruct;
- (id)initWithSourceLibrary:(id)a0 destinationLibrary:(id)a1 options:(id)a2;
- (BOOL)transferPersonWithUuid:(id)a0 error:(id *)a1;
- (void)_setRelationship:(id)a0 origin:(id)a1 target:(id)a2;
- (BOOL)transferFaceCropWithUuid:(id)a0 error:(id *)a1;
- (BOOL)_copyFileFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)_copyFilesFromSourceAsset:(id)a0 toDestinationAsset:(id)a1 objectMap:(id)a2 filesCopied:(id)a3 error:(id *)a4;
- (BOOL)_copyMasterThumbnailFrom:(id)a0 toDestinationAsset:(id)a1 filesCopied:(id)a2 error:(id *)a3;
- (id)_copyObject:(id)a0 toDestinationObject:(id)a1 toLibrary:(id)a2 objectMap:(id)a3;
- (void)_copyRelationship:(id)a0 fromObject:(id)a1 toObject:(id)a2 inLibrary:(id)a3 objectMap:(id)a4;
- (id)_createNewObjectWithEntity:(id)a0 attributes:(id)a1 inLibrary:(id)a2;
- (id)_dedupedDestinationAssetWithSourceAsset:(id)a0 destinationLibrary:(id)a1;
- (BOOL)_deleteAsset:(id)a0;
- (void)_initFileManager;
- (id)_loadAssetWithUuid:(id)a0 fromLibrary:(id)a1 error:(id *)a2;
- (id)_loadDestinationLibraryWithError:(id *)a0;
- (id)_loadFaceCropWithUuid:(id)a0 fromLibrary:(id)a1 error:(id *)a2;
- (BOOL)_loadLibrariesWithError:(id *)a0;
- (id)_loadObjectWithEntityName:(id)a0 withValues:(id)a1 forKeyPaths:(id)a2 fromLibrary:(id)a3 error:(id *)a4;
- (id)_loadPersonWithUuid:(id)a0 fromLibrary:(id)a1 error:(id *)a2;
- (id)_loadSourceLibraryWithError:(id *)a0;
- (void)_setAttributes:(id)a0 onObject:(id)a1;
- (BOOL)_shouldSkipRelationship:(id)a0;
- (BOOL)_shouldSkipTransferWithSourceAsset:(id)a0 destinationAsset:(id)a1;
- (id)_sourceAttributesFromObject:(id)a0;
- (void)_transferThumbnailsForSourceAsset:(id)a0 toDestinationAsset:(id)a1 filesCopied:(id)a2;
- (void)_validateSourceAsset:(id)a0 destinationAsset:(id)a1;
- (void)_validateSourceFaceCrop:(id)a0 destinationFaceCrop:(id)a1;
- (void)_validateSourcePerson:(id)a0 destinationPerson:(id)a1;
- (id)initWithSourceBundle:(id)a0 destinationBundle:(id)a1 options:(id)a2;
- (BOOL)transferAssetWithUuid:(id)a0 error:(id *)a1;

@end
