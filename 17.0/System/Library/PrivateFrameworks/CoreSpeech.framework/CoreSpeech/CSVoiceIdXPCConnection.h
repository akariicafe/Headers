@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceIdXPCConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_xpc_object> *connection;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)activateConnection;
- (void)_handleClientError:(id)a0 client:(id)a1;
- (void)_handleClientEvent:(id)a0;
- (void)_handleClientMessage:(id)a0 client:(id)a1;
- (void)_sendReplyMessageWithResult:(BOOL)a0 error:(id)a1 event:(id)a2 client:(id)a3;

@end
