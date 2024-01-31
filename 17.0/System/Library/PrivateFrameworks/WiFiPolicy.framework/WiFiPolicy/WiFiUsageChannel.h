@interface WiFiUsageChannel : NSObject <NSCopying>

@property (nonatomic) long long channel;
@property (nonatomic) unsigned long long channelFlags;
@property (nonatomic) int band;
@property (nonatomic) long long channelWidth;
@property (nonatomic) BOOL isDFSChannel;

+ (id)channelWithBssDetails:(id)a0 andChannelInfoList:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqualToChannel:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)dfsChannel:(id)a0;

@end
