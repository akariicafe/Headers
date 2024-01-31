@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, AXMServiceDelegate;

@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface> {
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (weak, nonatomic) id<AXMServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_destroyXPCConnection;
- (void).cxx_destruct;
- (id)_serviceProxy;
- (void)prewarmVisionEngineService;
- (void)visionEngine:(id)a0 evaluateSource:(id)a1 context:(id)a2 options:(long long)a3 result:(id /* block */)a4;

@end
