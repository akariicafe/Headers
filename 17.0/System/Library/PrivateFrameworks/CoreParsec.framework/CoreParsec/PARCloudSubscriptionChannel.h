@class SFCloudChannelsRequestItem;

@interface PARCloudSubscriptionChannel : PARSubscriptionChannel

@property (retain, nonatomic) SFCloudChannelsRequestItem *channelItem;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithChannelItem:(id)a0;

@end
