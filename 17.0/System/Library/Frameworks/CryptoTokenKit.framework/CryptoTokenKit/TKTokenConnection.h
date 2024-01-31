@class NSXPCListener, NSMapTable, NSString, TKToken;

@interface TKTokenConnection : NSObject <NSXPCListenerDelegate>

@property (readonly, nonatomic) TKToken *token;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly, nonatomic) NSMapTable *sessions;
@property (retain, nonatomic) id initialKeepAlive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithToken:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
