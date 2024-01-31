@class NSString, NSMutableArray, NSXPCListener;
@protocol CloudMediaServicesInterfaceProtocol;

@interface CloudMediaServicesInterfaceXPCListener : NSObject <NSXPCListenerDelegate, CloudMediaServicesInterfaceProtocol> {
    NSXPCListener *_xpcListener;
}

@property (retain, nonatomic) NSMutableArray *clients;
@property (weak, nonatomic) id<CloudMediaServicesInterfaceProtocol> playbackCommandDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)setOverrideURL:(id)a0;
- (void)setServerEnvironment:(id)a0;
- (void)handleClientDisconnection:(id)a0;
- (void)getCloudExtensionConfigurationFor:(id)a0 homeUserID:(id)a1 endpointID:(id)a2 withCompletion:(id /* block */)a3;
- (void)pauseSample;
- (void)playSample:(id)a0;
- (void)sendPlaybackQueueToRemoteDestination:(id)a0 withCompletion:(id /* block */)a1;
- (void)sendPlaybackQueueWithUserActivityDictionary:(id)a0 forIntentID:(id)a1 toDestination:(id)a2 withIntentData:(id)a3 prepareQueue:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)stopAnalyticsWithIdentifier:(id)a0;
- (void)submitAnalyticsForType:(id)a0 andIdentifier:(id)a1 eventType:(id)a2 atTime:(id)a3 withMetadata:(id)a4;

@end
