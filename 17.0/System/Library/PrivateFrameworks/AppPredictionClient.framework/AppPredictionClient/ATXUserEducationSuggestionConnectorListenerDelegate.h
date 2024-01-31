@class NSString;

@interface ATXUserEducationSuggestionConnectorListenerDelegate : NSObject <NSXPCListenerDelegate> {
    NSString *_serviceName;
    void /* function */ *_interfaceFactory;
    id _requestHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServiceName:(id)a0 interfaceFactory:(void /* function */ *)a1 requestHandler:(id)a2;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
