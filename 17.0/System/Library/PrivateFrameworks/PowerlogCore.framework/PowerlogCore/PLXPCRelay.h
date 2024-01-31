@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface PLXPCRelay : NSObject

@property (retain) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_xpc_object> *relayConnection;
@property (retain) NSObject<OS_xpc_object> *xpcCrashMoverConn;
@property (retain) NSObject<OS_dispatch_queue> *crashMoverQueue;
@property BOOL relayActive;

+ (id)sharedInstance;

- (void)handleCrashMoverConnection:(id)a0;
- (id)init;
- (void)movePowerlogs;
- (void)stopRelay;
- (void)handlePeer:(id)a0 forEvent:(id)a1;
- (void)startRelay;
- (void).cxx_destruct;
- (BOOL)isDebugEnabled;
- (void)resetRelayConnection;

@end
