@class NSDictionary, NSString;

@interface GEOConfigGetExpiringKeysReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSDictionary *expiringKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
