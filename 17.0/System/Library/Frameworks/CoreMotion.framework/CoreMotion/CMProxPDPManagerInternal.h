@class NSObject;
@protocol OS_dispatch_queue;

@interface CMProxPDPManagerInternal : NSObject {
    void *fLocationdConnection;
    id /* block */ fPDPHandler;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
    BOOL fStartedUpdates;
}

- (id)init;
- (void)dealloc;
- (void)_startPDPUpdatesWithHandler:(id /* block */)a0;

@end
