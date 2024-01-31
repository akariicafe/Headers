@class TVRCRPCompanionLinkClientWrapper, NSTimer, TVRCSiriRemoteInfo, TVRCSiriRemoteConnectionManager;

@interface TVRCSiriRemoteFindingManager : NSObject

@property (weak, nonatomic) TVRCRPCompanionLinkClientWrapper *wrapper;
@property (retain, nonatomic) TVRCSiriRemoteInfo *pairedRemoteInfo;
@property (retain, nonatomic) TVRCSiriRemoteConnectionManager *connectionManager;
@property (nonatomic) BOOL shouldLoadCachedRemoteInfo;
@property (retain, nonatomic) NSTimer *heartbeatTimer;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_cachedRemoteInfoForRPDevice:(id)a0;
- (void)_fetchPairedRemoteInfoAndStartMonitoring;
- (void)_saveRemoteInfoToUserDefaultsIfNeeded;
- (void)_startHeartbeatTimer;
- (void)_startMonitoringPairedRemoteInfo;
- (void)_stopHeartbeatTimer;
- (void)_updatePairedRemoteInfo:(id)a0;
- (void)enableFindingSession:(BOOL)a0;
- (id)initWithCompanionLinkClientWrapper:(id)a0;

@end
