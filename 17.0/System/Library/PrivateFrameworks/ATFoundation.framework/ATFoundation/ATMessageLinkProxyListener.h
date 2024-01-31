@class ATMessageLink, NSString, NSXPCListener;

@interface ATMessageLinkProxyListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener *_listener;
}

@property (retain, nonatomic) ATMessageLink *messageLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)stop;
- (void).cxx_destruct;
- (id)endpoint;
- (id)initWithMessageLink:(id)a0;

@end
