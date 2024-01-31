@class NSString, NSObject;
@protocol OS_xpc_object, MBConnectionDelegate, OS_dispatch_queue;

@interface MBConnection : NSObject {
    _Atomic int _pid;
}

@property (weak) id<MBConnectionDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *processName;
@property (retain) NSString *personaIdentifier;

- (void)_handleXPCError:(id)a0;
- (id)initWithServiceName:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)suspend;
- (void)_refreshProcessInfoWithXPCConnection:(id)a0;
- (void)sendMessage:(id)a0 barrierBlock:(id /* block */)a1;
- (id)initWithServiceName:(id)a0;
- (id)initWithXPCConnection:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)sendMessage:(id)a0;
- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (void)_handleXPCEvent:(id)a0;
- (void)cancel;
- (id)sendMessageWithReplyAndSync:(id)a0 error:(id *)a1;
- (void)_setEventHandlerForXPCConnection:(id)a0;

@end
