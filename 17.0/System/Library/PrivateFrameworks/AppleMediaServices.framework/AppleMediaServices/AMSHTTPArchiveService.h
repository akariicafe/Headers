@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_createProxy;
- (void).cxx_destruct;
- (id)_createRemoteConnection;
- (void)_removeRemoteConnection;

@end
