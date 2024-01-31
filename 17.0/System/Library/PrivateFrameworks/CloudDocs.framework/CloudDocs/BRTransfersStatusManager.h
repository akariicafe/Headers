@class NSString, NSProgress, NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRTransfersStatusManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSProgress *_globalUploadProgress;
    NSProgress *_globalDownloadProgress;
    id _globalProgressSubscriber;
    unsigned long long _shouldHideGlobalDownloadProgressCount;
    NSObject<OS_dispatch_source> *_timerToDisplayGlobalProgress;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_personaIdentifier;
}

@property (readonly, copy) NSMutableArray *transfers;

+ (void)initialize;
+ (id)defaultManager;

- (void)dealloc;
- (void)removeTransfer:(id)a0;
- (void).cxx_destruct;
- (void)_progressSubscription;
- (void)_setGlobalProgress:(id)a0 forIvar:(id *)a1;
- (void)_setupTimerToDisplayGlobalProgress;
- (void)addTransfer:(id)a0;
- (void)downloadAndObserveItemAtURL:(id)a0 handler:(id /* block */)a1;
- (id)initWithPersonaIdentifier:(id)a0;
- (void)insertTransfer:(id)a0 atIndex:(unsigned long long)a1;
- (void)showGlobalProgressIfNeeded;
- (id)startObservingItemDownloadProgressAtURL:(id)a0;
- (void)stopObservingItemDownloadProgress:(id)a0;

@end
