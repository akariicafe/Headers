@class NSOrderedSet, NSArray, CWFAutoJoinParameters;

@interface CWFAutoJoinContext : NSObject <NSCopying>

@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters;
@property (copy, nonatomic) NSOrderedSet *knownNetworks;
@property (copy, nonatomic) NSArray *recentChannelList;
@property (copy, nonatomic) NSArray *remainingChannelList;
@property (copy, nonatomic) NSArray *SSIDList;
@property (copy, nonatomic) NSArray *ANQPElementIDList;
@property (nonatomic) unsigned long long maxScanChannelCount;
@property (nonatomic) BOOL BSSChannelsOnly;
@property (nonatomic) unsigned long long maxBSSChannelCount;
@property (nonatomic) unsigned long long maxBSSChannelAge;
@property (nonatomic) unsigned long long maxScanSSIDCount;
@property (nonatomic) unsigned long long maxHiddenKnownNetworkSSIDAge;
@property (nonatomic) unsigned long long maxScanCacheAge;
@property (nonatomic) unsigned long long maxANQPCacheAge;
@property (nonatomic) unsigned long long maxScanCycles;
@property (nonatomic) long long minRSSI;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) BOOL passiveScan;
@property (nonatomic) BOOL cacheOnly;
@property (nonatomic) double minBSSLocationAccuracy;
@property (nonatomic) double maxBSSLocationDistance;
@property (nonatomic) BOOL includeAdjacent5GHzChannel;
@property (nonatomic) BOOL allowStandalone6GHz;
@property (nonatomic) BOOL include6GHzChannels;
@property (nonatomic) BOOL alwaysIncludeRemainingNon2GHzChannels;
@property (nonatomic) BOOL allowDeferredCandidates;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqualToAutoJoinContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
