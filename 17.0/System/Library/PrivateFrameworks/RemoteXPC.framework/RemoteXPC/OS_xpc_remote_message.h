@class NSObject;
@protocol OS_xpc_object, OS_dispatch_data;

@interface OS_xpc_remote_message : NSObject {
    unsigned long long msg_id;
    id /* block */ barrier;
    NSObject<OS_dispatch_data> *body;
    int ool_length;
    NSObject<OS_xpc_object> *ool[16];
    OS_xpc_remote_message *link_stqe_next;
    BOOL wants_reply;
}

- (void).cxx_destruct;

@end
