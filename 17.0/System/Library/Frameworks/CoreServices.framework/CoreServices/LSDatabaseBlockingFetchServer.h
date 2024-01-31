@class NSXPCListener, NSObject;
@protocol OS_dispatch_queue;

@interface LSDatabaseBlockingFetchServer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    BOOL _running;
    _Atomic BOOL _forManualRebuild;
}

+ (id)sharedInstance;

- (id)_init;
- (void)startRunningIfNecessary;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)getEndpoint;
- (void)setBlockingIsForManualRebuild:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isForManualRebuild;

@end
