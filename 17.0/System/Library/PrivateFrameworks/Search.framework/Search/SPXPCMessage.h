@class NSString, NSDictionary, SPXPCConnection, NSObject;
@protocol OS_xpc_object, OS_os_transaction;

@interface SPXPCMessage : NSObject {
    SPXPCConnection *_receivingConnection;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_message;
    NSObject<OS_xpc_object> *_x_rootObject;
    NSObject<OS_xpc_object> *_x_Objects;
    NSObject<OS_xpc_object> *_x_reply;
    NSObject<OS_xpc_object> *_x_feedbackData;
    NSObject<OS_os_transaction> *_replyTransaction;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *feedbackData;
@property (copy, nonatomic) NSDictionary *info;

- (void)setRootObjectForFeedback:(id)a0;
- (id)init;
- (id)_initWithXPCMessage:(id)a0 onConnection:(id)a1;
- (id)_createXPCMessage;
- (void)setRootObject:(id)a0;
- (BOOL)needsReply;
- (id)rootObjectOfClasses:(id)a0;
- (void)sendReply:(id)a0;
- (id)initWithName:(id)a0 connection:(id)a1;
- (id)initWithName:(id)a0;
- (id)rootObjectOfClassesForFeedback:(id)a0;
- (id)initWithName:(id)a0 batchSize:(unsigned long long)a1;
- (id)objectsOfClasses:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 atIndex:(unsigned long long)a1;

@end
