@class NSString, NSArray, NSOperationQueue, VUIMediaLibrary, NSMutableArray, VUIMediaLibraryFetchControllerQueueOperation, VUINowPlayingObserver, VUIDelayOperation, NSObject;
@protocol OS_dispatch_queue, VUIMediaLibraryFetchControllerQueueDelegate;

@interface VUIMediaLibraryFetchControllerQueue : NSObject <VUINowPlayingObserverDelegate>

@property (retain, nonatomic) NSMutableArray *mutableFetchControllers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) BOOL shouldFetchOnResume;
@property (nonatomic) unsigned long long mediaLibraryRevision;
@property (retain, nonatomic) VUIMediaLibraryFetchControllerQueueOperation *currentFetchOperation;
@property (retain, nonatomic) VUIDelayOperation *delayContentsChangeOperation;
@property (retain, nonatomic) NSOperationQueue *serialFetchOperationQueue;
@property (retain, nonatomic) VUINowPlayingObserver *nowPlayingObserver;
@property (weak, nonatomic) id<VUIMediaLibraryFetchControllerQueueDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *fetchControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultQueueWithMediaLibrary:(id)a0;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_notifyDelegateFetchDidComplete;
- (void)_addStateObserverForFetchControllers:(id)a0;
- (void)_delayContentsChangeOperationDidComplete:(id)a0;
- (void)_enqueueAsyncProcessingQueueBlock:(id /* block */)a0;
- (void)_enqueueControllerFetchOperation;
- (void)_enqueueProcessingQueueBlock:(id /* block */)a0 synchronous:(BOOL)a1;
- (void)_enqueueSyncProcessingQueueBlock:(id /* block */)a0;
- (void)_handleMediaLibraryContentsChange;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)a0;
- (void)_queueOperationDidComplete:(id)a0;
- (void)_removeStateObserverForFetchControllers:(id)a0;
- (void)addFetchController:(id)a0;
- (void)addFetchControllers:(id)a0;
- (id)initWithMediaLibrary:(id)a0;
- (void)nowPlayingObserver:(id)a0 latestObservationDidChange:(id)a1;
- (void)pauseFetching;
- (void)removeFetchController:(id)a0;
- (void)removeFetchControllers:(id)a0;
- (void)resumeFetching;

@end
