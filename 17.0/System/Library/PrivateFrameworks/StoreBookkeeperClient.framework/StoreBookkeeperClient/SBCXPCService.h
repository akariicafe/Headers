@class SBCXPCServiceInterface, NSXPCConnection, SBCClientConfiguration, NSObject;
@protocol OS_dispatch_queue;

@interface SBCXPCService : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) SBCClientConfiguration *clientConfiguration;
@property (readonly, nonatomic) SBCXPCServiceInterface *XPCServiceInterface;
@property (nonatomic, getter=isConnectionConfigured) BOOL connectionConfigured;

+ (id)XPCInterfaceDebugDescription;
+ (Class)XPCServiceInterfaceClass;
+ (id)newListener;

- (void)dealloc;
- (void)setClientConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)closeServiceConnection;
- (void)_openServiceConnection;
- (void)_serverDidLaunch;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)a0;
- (id)newServiceConnection;

@end
