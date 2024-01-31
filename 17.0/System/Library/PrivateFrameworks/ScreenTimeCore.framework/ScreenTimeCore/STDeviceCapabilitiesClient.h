@class NSXPCConnection;

@interface STDeviceCapabilitiesClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)isCapabilityEnabledForUser:(id)a0 capability:(id)a1 completionHandler:(id /* block */)a2;

@end
