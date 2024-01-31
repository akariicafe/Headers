@class NSArray, NSString;

@interface GEOMapSubscriptionsFetchReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSArray *subscriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
