@class NSString, WLKCanonicalPlayablesResponse;

@interface WLKCanonicalPlayablesSiriRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSString *statsID;
@property (readonly, nonatomic) NSString *sportsEventID;
@property (readonly, nonatomic) WLKCanonicalPlayablesResponse *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithSportsEventID:(id)a0 caller:(id)a1;
- (id)initWithStatsID:(id)a0 caller:(id)a1;

@end
