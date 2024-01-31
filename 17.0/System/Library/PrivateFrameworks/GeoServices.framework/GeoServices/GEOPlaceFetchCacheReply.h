@class NSDictionary, NSString;

@interface GEOPlaceFetchCacheReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSDictionary *allCacheEntries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
