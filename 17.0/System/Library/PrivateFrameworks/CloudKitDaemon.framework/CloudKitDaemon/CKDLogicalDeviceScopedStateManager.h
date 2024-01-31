@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (readonly, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void)postClouddWalrusUpdateNotification;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (id)initWithDeviceContext:(id)a0;
- (void).cxx_destruct;
- (void)addClouddThrottle:(id)a0;
- (void)clearAllClouddThrottles;

@end
