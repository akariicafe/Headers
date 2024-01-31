@class MDMServerCore, NSString;

@interface MDMServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) MDMServerCore *server;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServer:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
