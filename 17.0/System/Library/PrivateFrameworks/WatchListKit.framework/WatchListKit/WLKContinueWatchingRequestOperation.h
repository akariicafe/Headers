@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequestOperation : WLKUTSNetworkRequestOperation

@property (retain, nonatomic) WLKContinueWatchingResponse *response;

+ (void)donateMediaItems:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)processResponse;
- (id)initWithCaller:(id)a0 options:(long long)a1;
- (id)initWithQueryParameters:(id)a0;

@end
