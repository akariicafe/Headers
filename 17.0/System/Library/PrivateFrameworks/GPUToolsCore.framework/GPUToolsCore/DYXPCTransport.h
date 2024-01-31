@class NSString, DYFuture, NSObject;
@protocol OS_xpc_object;

@interface DYXPCTransport : DYTransport {
    NSString *_amdIdentifier;
    NSObject<OS_xpc_object> *_connection;
    DYFuture *_future;
    BOOL _connected;
}

@property (readonly, nonatomic) BOOL isNewTransport;

- (BOOL)connected;
- (void)_invalidate;
- (id)connect;
- (void).cxx_destruct;
- (long long)_sendMessage:(id)a0 error:(id *)a1;
- (BOOL)_packMessage:(id)a0 error:(id *)a1;
- (id)initWithAMDIdentifier:(id)a0;
- (void)process_message_from_compat_daemon:(id)a0;

@end
