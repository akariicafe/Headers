@class SKRSharedFlowPluginXPCServer, ENCEncoreServiceLauncher;

@interface SKRExecutionListenerManager : NSObject

@property (readonly, nonatomic) SKRSharedFlowPluginXPCServer *sharedPluginServer;
@property (readonly, nonatomic) ENCEncoreServiceLauncher *encoreServiceLauncher;

- (id)init;
- (void).cxx_destruct;

@end
