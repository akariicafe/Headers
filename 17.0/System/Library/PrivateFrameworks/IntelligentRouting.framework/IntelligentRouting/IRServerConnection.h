@class NSUUID, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface IRServerConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy) id /* block */ interruptionHandler;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSUUID *sessionID;
@property (readonly) id exportedObject;

- (void)dealloc;
- (void)invalidate;
- (id)remoteObjectProxy;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 queue:(id)a1 exportedObject:(id)a2;

@end
