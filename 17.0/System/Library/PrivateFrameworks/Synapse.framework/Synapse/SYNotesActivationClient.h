@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SYNotesActivationClient : NSObject

@property (retain, nonatomic, setter=_setConnection:) NSXPCConnection *_connection;
@property (retain, nonatomic, setter=_clientQueue:) NSObject<OS_dispatch_queue> *_clientQueue;

- (id)init;
- (void).cxx_destruct;
- (void)_ensureConnection;
- (void)activateNotesWithUserActivity:(id)a0 completion:(id /* block */)a1;

@end
