@class NSString, NSDictionary, ATXPCConnection, NSObject;
@protocol OS_xpc_object;

@interface ATXPCMessage : NSObject {
    ATXPCConnection *_receivingConnection;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_reply;
}

@property (readonly, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *info;

- (id)_initWithXPCMessage:(id)a0 onConnection:(id)a1;
- (void)dealloc;
- (id)_createXPCMessage;
- (BOOL)needsReply;
- (void)sendReply:(id)a0;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;

@end
