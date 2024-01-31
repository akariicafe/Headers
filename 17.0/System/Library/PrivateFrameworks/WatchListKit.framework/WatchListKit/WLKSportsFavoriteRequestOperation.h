@class NSArray, NSString, WLKSportsFavoriteResponse;

@interface WLKSportsFavoriteRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSArray *ids;
@property (readonly, copy, nonatomic) NSString *caller;
@property (retain, nonatomic) WLKSportsFavoriteResponse *response;

- (void).cxx_destruct;
- (void)processResponse;
- (id)_preparePOSTQueryOnlyWithRequest:(id)a0;
- (id)initWithAction:(unsigned long long)a0 ids:(id)a1;
- (id)initWithAction:(unsigned long long)a0 ids:(id)a1 caller:(id)a2;
- (void)prepareURLRequest:(id /* block */)a0;

@end
