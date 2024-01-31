@class NSLock, NSXPCConnection;

@interface SKServiceProxy : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)serviceProxy;
+ (id)inAppClientInterface;
+ (id)inAppServiceInterface;

- (id)init;
- (id)serviceConnection;
- (void)_serviceConnectionInvalidated;
- (void).cxx_destruct;
- (id)objectProxyWithErrorHandler:(id /* block */)a0;
- (id)inAppService;
- (id)inAppServiceWithErrorHandler:(id /* block */)a0;

@end
