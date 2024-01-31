@class NSString, NSDate;

@interface WiFiUsageRealTimeCoexSession : WiFiUsageSession

@property unsigned long long rtCoexType;
@property (retain) NSString *rtCoexSubType;
@property unsigned long long lastRequestType;
@property unsigned long long lastRequestPreferredChannel;
@property int lastRequestPreferredBand;
@property BOOL lastRequestDifferentSSID;
@property (retain) NSString *lastRequestPreferredSSID;
@property (retain) NSString *lastRequestPreferredBSS;
@property BOOL isSplitSSID;
@property BOOL hasCandidates;
@property BOOL hasDifferentIpv4DetailsAfterSSIDTransition;
@property BOOL hasDifferentIpv6DetailsAfterSSIDTransition;
@property BOOL isRtCoexOptimal;
@property (retain) NSDate *firstRtCoexOptimal;
@property (retain) NSDate *lastRtCoexOptimalStatusChange;
@property double rtCoexInOptimalDuration;
@property (retain) NSDate *lastEnterPreferredChannel;
@property double preferredChannelDuration;
@property (retain) NSDate *lastEnterPreferredBand;
@property double preferredBandDuration;
@property (retain) NSDate *firstSSIDTransition;
@property (retain) NSDate *firstIPUpdateAfterSSIDTransition;
@property (retain) NSDate *firstManualJoin;
@property (retain) NSDate *firstManualJoinAfterSSIDTransition;
@property unsigned long long requestSteerToPreferredChannelCount;
@property unsigned long long requestSteerCount;
@property unsigned long long requestDisconnectCount;

- (void)setSteeringRequest:(unsigned long long)a0 preferredChannel:(unsigned long long)a1 preferredBand:(int)a2 preferredSSID:(id)a3 targetSSIDDiffersFromCurrent:(BOOL)a4 preferredBSS:(id)a5 ssidIsSplit:(BOOL)a6 transitionCandidates:(BOOL)a7;
- (void)setRealtimeCoexStarted:(BOOL)a0 type:(unsigned long long)a1 reasons:(id)a2;
- (id)eventDictionary:(BOOL)a0;
- (void)updateAssociatedNetworkDetails:(id)a0;
- (id)metricName;
- (id)initWithInterfaceName:(id)a0;
- (void)summarizeSession;
- (void)linkStateDidChange:(BOOL)a0 isInvoluntary:(BOOL)a1 linkChangeReason:(long long)a2 linkChangeSubreason:(long long)a3 withNetworkDetails:(id)a4;
- (void)processIPv6Changes:(id)a0;
- (void)setRealTimeCoexStatus:(BOOL)a0 type:(unsigned long long)a1;
- (id)eventDictionaryByBand:(int)a0 isFirst:(BOOL)a1;
- (void)joinStateDidChange:(id)a0 withReason:(unsigned long long)a1 lastDisconnectReason:(long long)a2 lastJoinFailure:(long long)a3 andNetworkDetails:(id)a4;
- (void)sessionDidStart;
- (void)processIPv4Changes:(id)a0;
- (BOOL)infraIsPartOfSplitSSID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCurrentBandPreferredBand;
- (BOOL)isCurrentChannelPreferredChannel;
- (void)setPreferredChannelAndBandUsageWithReferenceDate:(id)a0;
- (void)updatePreferredChannelAndBandUsageWithReferenceDate:(id)a0;
- (void)updateRtCoexInOptimalDuration:(BOOL)a0;

@end
