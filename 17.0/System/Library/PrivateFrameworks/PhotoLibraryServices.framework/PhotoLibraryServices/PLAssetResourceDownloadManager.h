@class NSOperationQueue, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadManager : NSObject {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_requestIsolationQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_requestById;
    _Atomic int _currentRequestId;
}

+ (id)defaultManager;

- (id)init;
- (void)cancelRequest:(int)a0;
- (void).cxx_destruct;
- (id)_requestWithID:(int)a0;
- (void)_setRequest:(id)a0 forRequestID:(int)a1;
- (int)requestCloudResourceType:(unsigned long long)a0 assetObjectID:(id)a1 library:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
