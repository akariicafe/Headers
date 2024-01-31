@class NSString, NSObject;
@protocol OS_xpc_object;

@interface BSBasicServerClient : NSObject <BSXPCServerClient> {
    NSObject<OS_xpc_object> *_connection;
    int _resumed;
    int _cancelled;
    BOOL _managingResumeState;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithConnection:(id)a0;

- (void)dealloc;
- (void)suspend;
- (void)sendMessageWithPacker:(id /* block */)a0 replyHandler:(id /* block */)a1 onQueue:(id)a2;
- (void)invalidate;
- (id)initWithConnection:(id)a0;
- (void)sendMessage:(id)a0;
- (void)resume;
- (void).cxx_destruct;
- (void)sendMessageWithPacker:(id /* block */)a0;

@end
