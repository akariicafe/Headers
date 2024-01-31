@class STScreenTimeConfiguration, NSXPCConnection;

@interface STScreenTimeConfigurationObserver : NSObject

@property (readonly) NSXPCConnection *xpcConnection;
@property (retain) STScreenTimeConfiguration *configuration;
@property int notificationToken;

- (void)startObserving;
- (void)stopObserving;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_requestConfiguration;
- (void)_updateWithConfiguration:(id)a0;
- (id)initWithUpdateQueue:(id)a0;

@end
