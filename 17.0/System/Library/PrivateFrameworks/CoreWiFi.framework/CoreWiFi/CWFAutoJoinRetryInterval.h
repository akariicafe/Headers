@interface CWFAutoJoinRetryInterval : NSObject <NSCopying>

@property (nonatomic) unsigned long long interval;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL BSSChannelsOnly;
@property (nonatomic) unsigned long long maxBSSChannelCount;
@property (nonatomic) unsigned long long maxBSSChannelAge;
@property (nonatomic) unsigned long long dwellTime;
@property (nonatomic) BOOL passiveScan;
@property (nonatomic) BOOL allowAutoHotspotFallback;
@property (nonatomic) BOOL includeAdjacent5GHzChannel;
@property (nonatomic) BOOL alwaysIncludeRemainingNon2GHzChannels;

- (id)autoJoinRetryInterval:(unsigned long long)a0 count:(unsigned long long)a1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
