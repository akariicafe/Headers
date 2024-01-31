@class NSArray, NSMutableDictionary;

@interface PUWallpaperExportProgress : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) double totalWork;
@property (readonly, nonatomic) NSMutableDictionary *downloadProgress;
@property (readonly, nonatomic) NSMutableDictionary *processingProgress;
@property (readonly, nonatomic) id /* block */ progressHandler;

- (void)begin;
- (id)init;
- (void)finish;
- (void).cxx_destruct;
- (void)_updateProgressValue:(double)a0 forAssetUUID:(id)a1 inDictionary:(id)a2;
- (id)initWithAssetUUIDs:(id)a0 progressHandler:(id /* block */)a1;
- (void)reportDownloadProgress:(double)a0 forAssetUUID:(id)a1;
- (void)reportProcessingProgress:(double)a0 forAssetUUID:(id)a1;

@end
