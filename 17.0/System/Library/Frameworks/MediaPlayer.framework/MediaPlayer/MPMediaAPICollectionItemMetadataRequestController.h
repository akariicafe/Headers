@class NSMutableDictionary, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface MPMediaAPICollectionItemMetadataRequestController : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_pendingOperationsIdentiferMap;
}

@property (class, readonly, nonatomic) MPMediaAPICollectionItemMetadataRequestController *sharedInstance;

- (id)_init;
- (void)cancelRequest:(id)a0;
- (void).cxx_destruct;
- (void)enqueueRequest:(id)a0 withBatchProgressHandler:(id /* block */)a1;

@end
