@protocol BLTRemoteGlobalSettingsProvider, BLTRemoteGlobalSettingsSyncServerLocalEndpoint, BLTRemoteGlobalSettingsSyncServerRemoteEndpoint;

@interface BLTRemoteGlobalSettingsSyncServer : NSObject

@property (weak, nonatomic) id<BLTRemoteGlobalSettingsSyncServerRemoteEndpoint> remoteEndpoint;
@property (weak, nonatomic) id<BLTRemoteGlobalSettingsSyncServerLocalEndpoint, BLTRemoteGlobalSettingsProvider> localEndpoint;

+ (id)remoteGlobalSettingsSyncServerWithLocalEndpoint:(id)a0 remoteEndpoint:(id)a1;
+ (id)remoteGlobalSettingsSyncServerWithLocalEndpoint:(id)a0 remoteEndpoint:(id)a1 initialSyncCompletion:(id /* block */)a2;

- (void)observer:(id)a0 updateGlobalSettings:(id)a1;
- (void).cxx_destruct;
- (void)checkAndThenSendGlobalSettings:(id)a0;
- (id)initWithLocalEndpoint:(id)a0 remoteEndpoint:(id)a1 initialSyncCompletion:(id /* block */)a2;
- (void)sendInitialChangsetWithCompletion:(id /* block */)a0;
- (void)updateLocalSettingsWithProvider:(id)a0;

@end
