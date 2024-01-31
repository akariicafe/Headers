@class NSString, XBApplicationSnapshot;
@protocol XBApplicationSnapshotImageGenerationScheduling, XBSnapshotDataProvider;

@interface XBApplicationSnapshotImageGenerator : NSObject {
    XBApplicationSnapshot *_weak_snapshot;
    id<XBApplicationSnapshotImageGenerationScheduling> _scheduler;
    id<XBSnapshotDataProvider> _dataProvider;
    id /* block */ _didGenerateImageHandler;
    id /* block */ _didGenerateImageDataHandler;
    NSString *_loggingPrefix;
    BOOL _generate_handled_request;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _generate_lock;
    long long _imageDataRequest;
    long long _dataProviderFetchType;
}

- (void)performAsync:(id /* block */)a0;
- (void)generate;
- (id)initWithScheduler:(id)a0 snapshot:(id)a1 dataProvider:(id)a2 imageDataRequest:(long long)a3 loggingPrefix:(id)a4 imageGenerationHandler:(id /* block */)a5 imageDataGenerationHandler:(id /* block */)a6;
- (void)_performImageDataGeneration:(id /* block */)a0 withHandler:(id /* block */)a1;
- (BOOL)_generate_lock_shouldGenerateForSnapshot:(id)a0 reason:(id *)a1;
- (BOOL)_shouldGenerateForSnapshot:(id)a0 reason:(id *)a1;
- (void)scheduleGeneration;
- (id)_generate_imageFromLegacyDataProvider:(id)a0 forSnapshot:(id)a1 imageDataHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_generate;
- (id)_generate_imageFromNewDataProvider:(id)a0 forSnapshot:(id)a1 imageDataHandler:(id /* block */)a2;

@end
