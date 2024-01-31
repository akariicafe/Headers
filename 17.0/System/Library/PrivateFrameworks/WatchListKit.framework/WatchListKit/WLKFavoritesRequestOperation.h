@class NSArray;

@interface WLKFavoritesRequestOperation : WLKUTSNetworkRequestOperation

@property (readonly, nonatomic) NSArray *favorites;

- (id)initWithCaller:(id)a0;
- (void).cxx_destruct;
- (void)processResponse;
- (void)prepareURLRequest:(id /* block */)a0;

@end
