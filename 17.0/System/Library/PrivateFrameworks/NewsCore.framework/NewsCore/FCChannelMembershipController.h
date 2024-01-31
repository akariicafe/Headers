@class FCChannelMembershipRecordSource;

@interface FCChannelMembershipController : NSObject

@property (readonly, nonatomic) FCChannelMembershipRecordSource *recordSource;

- (id)cachedChannelMembershipsForIDs:(id)a0;
- (id)initWithChannelMembershipRecordSource:(id)a0;
- (void).cxx_destruct;
- (void)fetchChannelMembershipsForIDs:(id)a0 maximumCachedAge:(double)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)channelMembershipsFromHeldRecords:(id)a0;

@end
