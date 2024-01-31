@class NSString, NSXPCConnection, NSXPCInterface, ARWeakReference;
@protocol ARControlProtocol;

@interface ARRemoteControl : NSObject <ARRemoteControlProtocol> {
    NSXPCConnection *_connection;
    ARWeakReference *_exportedObjectWeakReference;
}

@property (class, readonly, nonatomic) NSXPCInterface *controlProxyInterface;
@property (class, readonly, nonatomic) NSXPCInterface *controlInterface;

@property (readonly, nonatomic) id<ARControlProtocol> control;
@property (readonly, nonatomic) id<ARControlProtocol> syncControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)invalidationHandler;
- (void)interruptionHandler;

@end
