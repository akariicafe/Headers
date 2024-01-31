@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface PUWallpaperPosterMigrator : NSObject

@property (readonly, nonatomic) NSURL *assetDirectory;
@property (readonly, nonatomic) unsigned long long configurationType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_handleLoadedConfiguration:(id)a0 scale:(double)a1 completionBlock:(id /* block */)a2;
- (void)_handleSegmentationItem:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 options:(id)a3 error:(id)a4 completionBlock:(id /* block */)a5;
- (void)attemptMigrationWithCompletionBlock:(id /* block */)a0;
- (id)initWithAssetDirectory:(id)a0 configurationType:(unsigned long long)a1;

@end
