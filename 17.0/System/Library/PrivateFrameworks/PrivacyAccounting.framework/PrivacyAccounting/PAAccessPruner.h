@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PAAccessPruner : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedInstance;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 queue:(id)a1;
- (void)pruneEventsFromStartTime:(double)a0 toEndTime:(double)a1 completionHandler:(id /* block */)a2;

@end
