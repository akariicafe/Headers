@class NSString, MKPhotoLibraryAlbumMigrator, MKPhotoLibrary, MKPhotoLibraryAssetDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface MKPhotoLibraryMigrator : MKMigrator {
    NSObject<OS_dispatch_queue> *_assetQueue;
    unsigned long long _interruptionCount;
    NSString *_root;
    MKPhotoLibrary *_photoLibrary;
    MKPhotoLibraryAssetDatabase *_db;
    unsigned long long _type;
}

@property (nonatomic) BOOL isBusy;
@property (copy, nonatomic) NSString *path;
@property (weak, nonatomic) MKPhotoLibraryAlbumMigrator *albumMigrator;

- (BOOL)shouldRetry;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (void)retry;
- (void)import;
- (void)addImportTime:(id)a0;
- (void)addToAssetQueue:(id)a0;
- (void)import:(id)a0 identifier:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4 filename:(id)a5 collection:(id)a6 originalFilename:(id)a7;
- (void)importChunk:(id)a0 identifier:(id)a1 offset:(unsigned long long)a2 length:(unsigned long long)a3 total:(unsigned long long)a4 filename:(id)a5 collection:(id)a6 originalFilename:(id)a7;
- (void)photoLibraryDidAddAsset:(id)a0 identifier:(id)a1;
- (void)photoLibraryDidInterruptAsset:(id)a0;
- (void)photoLibraryDidSetIdentifier:(id)a0 forAsset:(id)a1;
- (void)photoLibraryWillAddAsset;
- (void)resetInterruptionCount;

@end
