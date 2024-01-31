@class WLKContinueWatchingResponse;

@interface WLKTopShelfUpNextRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContinueWatchingResponse *response;

- (id)init;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithQueryParameters:(id)a0 options:(long long)a1;

@end
