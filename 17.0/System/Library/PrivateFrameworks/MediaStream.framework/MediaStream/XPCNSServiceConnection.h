@class NSString, XPCServiceConnection;
@protocol NSObject, XPCNSServiceConnectionDelegate;

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate> {
    XPCServiceConnection *_serviceConnection;
}

@property (readonly, retain, nonatomic) NSString *serviceName;
@property (weak, nonatomic) id<XPCNSServiceConnectionDelegate> delegate;
@property (retain, nonatomic) id<NSObject> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)XPCServiceConnectionDidDisconnect:(id)a0;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)XPCServiceConnection:(id)a0 didReceiveRequest:(id)a1 sequenceNumber:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0 withHandler:(id /* block */)a1;
- (id)initWithXPCServiceConnection:(id)a0;

@end
