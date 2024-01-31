@class NSString;
@protocol SFRemoteHotspotSessionDelegate, SFRemoteHotspotProtocol;

@interface SFRemoteHotspotSession : NSObject <SFRemoteHotspotClient, SFCompanionXPCManagerObserver>

@property BOOL browsing;
@property (retain) id<SFRemoteHotspotProtocol> connectionProxy;
@property (weak, nonatomic) id<SFRemoteHotspotSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopBrowsing;
- (id)init;
- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)enableHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)enableRemoteHotspotForDevice:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)xpcManagerConnectionInterrupted;
- (void)updatedFoundDeviceList:(id)a0;
- (void)startBrowsing;

@end
