@class ASDPurgeAppsRequestOptions;

@interface ASDPurgeAppsRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDPurgeAppsRequestOptions *options;

+ (long long)requestType;

- (id)initWithOptions:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;

@end
