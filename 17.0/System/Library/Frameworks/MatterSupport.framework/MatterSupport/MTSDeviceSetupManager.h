@class NSString, MTSXPCServerProxy;

@interface MTSDeviceSetupManager : NSObject <HMFLogging>

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithServerProxy:(id)a0;
- (void)performDeviceSetupUsingRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
