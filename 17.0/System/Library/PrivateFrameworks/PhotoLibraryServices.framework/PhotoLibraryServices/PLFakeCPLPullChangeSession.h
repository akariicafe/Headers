@class NSObject, PLFakeCPLLibraryManager;
@protocol OS_dispatch_queue;

@interface PLFakeCPLPullChangeSession : NSObject {
    PLFakeCPLLibraryManager *_libraryManager;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)forwardingTargetForSelector:(SEL)a0;

- (void)finalizeWithCompletionHandler:(id /* block */)a0;
- (void)acknowledgeChangeBatch:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)getChangeBatchWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithLibraryManager:(id)a0 queue:(id)a1;

@end
