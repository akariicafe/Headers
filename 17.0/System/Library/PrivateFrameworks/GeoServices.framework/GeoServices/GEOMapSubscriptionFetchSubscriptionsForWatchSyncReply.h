@class NSString, GEOPBCompanionSubscriptionsInfo;

@interface GEOMapSubscriptionFetchSubscriptionsForWatchSyncReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOPBCompanionSubscriptionsInfo *subscriptionsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
