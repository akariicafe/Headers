@class MKMapSnapshotOptions, VKMapSnapshotCreator, NSXPCConnection, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface MKMapSnapshotter : NSObject {
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id /* block */ _completionHandler;
    geo_isolater *_isolation;
    NSXPCConnection *_snapshotService;
    VKMapSnapshotCreator *_snapshotCreator;
    BOOL _needsResume;
}

@property (readonly, nonatomic, getter=isLoading) BOOL loading;

- (void)_cancel;
- (void)_enterBackground:(id)a0;
- (void)_failWithError:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)_isWidget;
- (void)_cleanupSnapshotCreator;
- (void)_setupCustomFeaturesForAnnotationViewsIfNeeded;
- (void)_performSnapshot;
- (void)startWithQueue:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_shouldRenderLogoForSnapshotDimensions;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)_deliverSnapshot:(id)a0;
- (void)_exitBackground:(id)a0;
- (void)_succeedWithSnapshot:(id)a0;
- (void)_performSnapshotOnSnapshotQueue;
- (void)_drawAppleLogoIfNecessaryOnSnapshot:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithOptions:(id)a0;
- (void)_respondWithError:(id)a0;

@end
