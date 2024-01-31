@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ICPlayActivityCenter : NSObject {
    NSXPCConnection *_daemonPlayActivityControllerConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly, nonatomic) ICPlayActivityCenter *shared;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_daemonPlayActivityControllerConnection;
- (void)flushPendingPlayActivityEventsWithCompletionHandler:(id /* block */)a0;
- (void)recordPlayActivityEvents:(id)a0 shouldFlush:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

@end
