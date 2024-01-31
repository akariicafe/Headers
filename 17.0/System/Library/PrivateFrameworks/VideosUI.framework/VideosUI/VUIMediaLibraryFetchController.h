@class VUIMediaLibrary, NSString, NSOperationQueue, NSObject, NSOperation;
@protocol OS_dispatch_queue;

@interface VUIMediaLibraryFetchController : NSObject

@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property long long state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) NSOperationQueue *serialFetchOperationQueue;
@property (retain, nonatomic) NSOperation *fetchOperation;
@property (nonatomic) unsigned long long mediaLibraryRevision;
@property (nonatomic) unsigned long long pauseCount;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *logName;
@property (copy, nonatomic) NSString *logNameSuffix;

+ (id)_logStringWithFetchControllers:(id)a0;

- (void)pause;
- (id)init;
- (void)resume;
- (void).cxx_destruct;
- (void)cancelFetch;
- (void)_cancelFetch;
- (void)_didCompleteFetchOperation:(id)a0;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)a0;
- (void)_enqueueFetchWithReason:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_enqueueProcessingQueueBlock:(id /* block */)a0 synchronous:(BOOL)a1;
- (void)_enqueueSyncProcessingQueueBlock:(id /* block */)a0;
- (void)_fetchOperationCompleted:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_fetchOperationForFetchReason:(long long)a0;
- (void)_moveToPausedState;
- (BOOL)_shouldFetchForMediaLibraryRevision:(unsigned long long)a0;
- (void)_startFetchIfNeededWithMediaLibraryRevision:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)_startFetchWithCompletionHandler:(id /* block */)a0;
- (BOOL)_updateMutableArray:(id)a0 withLatestObjects:(id)a1 changeSet:(id)a2 updateOnNoChanges:(BOOL)a3;
- (void)beginFetchWithMediaLibraryRevision:(unsigned long long)a0 completionHandler:(id /* block */)a1 completionQueue:(id)a2;
- (id)initWithMediaLibrary:(id)a0;

@end
