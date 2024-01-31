@class NSString, NSMutableSet, NSDate;

@interface WiFiUsageSoftApSession : WiFiUsageSession

@property (retain, nonatomic) NSString *requester;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSString *tearDownReason;
@property (retain, nonatomic) NSDate *lastAwdlActiveTime;
@property (retain, nonatomic) NSDate *lastInfraActiveTime;
@property (nonatomic) BOOL compatibilityEnabled;
@property (nonatomic) unsigned long long appleClientConnectCount;
@property (nonatomic) unsigned long long otherClientConnectCount;
@property (nonatomic) unsigned long long hiddenClientConnectCount;
@property (nonatomic) unsigned long long broadcastClientConnectCount;
@property (nonatomic) unsigned long long twoFourGHzClientConnectCount;
@property (nonatomic) unsigned long long fiveGHzClientConnectCount;
@property (nonatomic) unsigned long long autoHotspotClientConnectCount;
@property (nonatomic) unsigned long long instantHotspotClientConnectCount;
@property (nonatomic) unsigned long long clientDisconnectCount;
@property (nonatomic) unsigned long long maxConnectedClientCount;
@property (nonatomic) BOOL lastHiddenState;
@property (nonatomic) unsigned long long lastChannel;
@property (nonatomic) unsigned long long twoFourGHzChannelCount;
@property (nonatomic) unsigned long long fiveGHzChannelCount;
@property (nonatomic) double lowPowerModeDuration;
@property (nonatomic) double infraActiveDuration;
@property (nonatomic) double awdlActiveDuration;
@property (nonatomic) double requestToUpLatency;
@property (nonatomic) unsigned long long infraStateChangedCount;
@property (nonatomic) unsigned long long awdlStateChangedCount;
@property (nonatomic) unsigned long long knownNetworkScanCount;
@property (nonatomic) unsigned long long hiddenTransitionCount;
@property (nonatomic) unsigned long long bandTransitionCount;
@property (nonatomic) unsigned long long twoFourGHzDeniedChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii1ChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii2aChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii2cChannelCount;
@property (nonatomic) unsigned long long fiveGHzDeniedUnii3ChannelCount;
@property (nonatomic) unsigned long long appliedCountryCode;
@property (retain, nonatomic) NSMutableSet *connectedClients;

- (void)awdlStateDidChange:(BOOL)a0 inMode:(long long)a1;
- (void)softApStateDidChange:(BOOL)a0 requester:(id)a1 status:(id)a2 changeReason:(id)a3 channelNumber:(unsigned long long)a4 countryCode:(unsigned long long)a5 isHidden:(BOOL)a6 isInfraConnected:(BOOL)a7 isAwdlUp:(BOOL)a8 lowPowerModeDuration:(double)a9 compatibilityMode:(BOOL)a10 requestToUpLatency:(double)a11;
- (id)eventDictionary:(BOOL)a0;
- (id)metricName;
- (id)initWithInterfaceName:(id)a0;
- (void)summarizeSession;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)linkQualityDidChange:(id)a0;
- (void)addSoftApCoexEvent:(unsigned long long)a0 deniedUnii1ChannelMap:(unsigned long long)a1 deniedUnii2aChannelMap:(unsigned long long)a2 deniedUnii2cChannelMap:(unsigned long long)a3 deniedUnii3ChannelMap:(unsigned long long)a4;
- (void).cxx_destruct;
- (void)addSoftApClientEvent:(BOOL)a0 identifier:(id)a1 isAppleClient:(BOOL)a2 isInstantHotspot:(BOOL)a3 isAutoHotspot:(BOOL)a4 isHidden:(BOOL)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
