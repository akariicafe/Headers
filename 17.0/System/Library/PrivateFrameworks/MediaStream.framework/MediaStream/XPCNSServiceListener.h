@class NSString, XPCServiceListener;
@protocol XPCNSServiceListenerDelegate;

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate> {
    XPCServiceListener *_serviceListener;
}

@property (readonly, retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) id<XPCNSServiceListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceName:(id)a0 queue:(id)a1 delegate:(id)a2;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (void)start;
- (void)XPCServiceListener:(id)a0 didReceiveNewConnection:(id)a1;
- (void).cxx_destruct;
- (BOOL)XPCServiceListener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
