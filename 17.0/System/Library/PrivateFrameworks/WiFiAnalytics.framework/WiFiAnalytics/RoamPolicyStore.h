@class AnalyticsStoreMOHandler;

@interface RoamPolicyStore : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *roamPolicyMOHandler;
@property BOOL enabled;

+ (id)bandFromChInfo:(id)a0;
+ (id)cleanChannelFlagsIn:(id)a0;
+ (id)convertChannelList:(id)a0 log:(BOOL)a1 For:(const char *)a2;
+ (id)extractChannelList:(id)a0 channelKeyPath:(id)a1 channelFlagsKeyPath:(id)a2 logFor:(const char *)a3;
+ (id)makeChanInfoFromChannel:(long long)a0 andFlags:(long long)a1;
+ (id)neighborChannelsAsArray:(id)a0 log:(BOOL)a1 For:(const char *)a2;
+ (id)rangeStringWithRssiLevel:(unsigned long long)a0;

- (void)findDeploymentType:(unsigned long long)a0;
- (void)listOutMostUsedRoamReasons:(unsigned long long)a0 roamReason:(unsigned long long)a1;
- (void)listOutLinkLossSuppressionRoams:(unsigned long long)a0;
- (BOOL)doWeHaveEnoughSamplesToBuildChanList:(unsigned long long)a0 numRoamSamples:(unsigned long long)a1;
- (id)initWithAnalyticsStore:(id)a0;
- (BOOL)buildRoamCacheInfoForNetwork:(id)a0 bssid:(id)a1 numRoamSamples:(unsigned long long)a2;
- (void)listOutReassocRoams:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (BOOL)isHomeEnvironment:(id)a0;
- (id)deriveRoamInfo:(id)a0 ssid:(id)a1 numRoamSamplesCollectedSoFar:(unsigned long long)a2;
- (BOOL)buildRoamPoliciesForNetwork:(id)a0 bssid:(id)a1 numRoamSamples:(unsigned long long)a2 deploymentStatus:(BOOL)a3;
- (void)setDeploymentFromRoamInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (BOOL)checkForNewBSSAddition:(id)a0 bssid:(id)a1;
- (void)predictPath:(id)a0;
- (BOOL)monitorDeploymentChanges:(id)a0 ssid:(id)a1 roamStatus:(unsigned long long)a2 originBssid:(id)a3 targetBssid:(id)a4;
- (BOOL)isWorkEnvironment:(id)a0;
- (void)storeNeighborsInfoLearningsFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)listOutTimeSpentOnBss:(unsigned long long)a0 timeSpentOnBss:(unsigned long long)a1 motionState:(long long)a2;
- (void)deriveRoamDeltaFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (BOOL)isNetworkQualifiedForAdaptiveRoaming:(id)a0;
- (void)updateNeighborChannelsInCoreDataWith:(id)a0 bssid:(id)a1 ssid:(id)a2;
- (void)storeNeighborsInfoLearningsFromRoamInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (BOOL)doWeHaveEnoughSamplesToDeriveRSSITrigger:(unsigned long long)a0 numRoamSamples:(unsigned long long)a1;
- (id)collectRoamCandidates:(id)a0 roamSamplesToCollect:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)doWeHaveEnoughSamplesToBuildRoamCache:(unsigned long long)a0 numRoamSamples:(unsigned long long)a1;
- (void)checkForFrequentRoams:(unsigned long long)a0 date:(id)a1 motionState:(long long)a2;
- (void)listOutLazyRoamScanInfo:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (void)deriveBadRoams:(id)a0;
- (void)setDeploymentFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)listOutBTMRoams:(unsigned long long)a0;
- (void)updateNeighborChannelsFromRoamTargetsChannels:(id)a0 bssid:(id)a1 ssid:(id)a2;
- (void)listOutMostUsedSourceRssi:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (void)locateTheNeighbor:(unsigned long long)a0 cacheRssi:(long long)a1;
- (void)resetAdaptiveRoamingStateMachine:(id)a0 bssid:(id)a1;
- (BOOL)inRange:(long long)a0 high:(long long)a1 value:(long long)a2;

@end
