@class SSURLConnectionRequest, SSMetricsPageEvent, SSMetricsConfiguration;

@interface RadioGetGenreTreeNodesRequest : RadioRequest {
    unsigned long long _parentNodeID;
    SSURLConnectionRequest *_request;
}

@property (readonly, retain, nonatomic) SSMetricsConfiguration *metricsConfiguration;
@property (readonly, copy, nonatomic) SSMetricsPageEvent *metricsPageEvent;

+ (id)cacheKeyForGenreWithNodeID:(unsigned long long)a0;
+ (id)fallbackRequestPath;
+ (id)requestBagKey;
+ (id)responseContentKey;

- (id)init;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithParentNodeID:(unsigned long long)a0;
- (id)_genreTreeByApplyingResponse:(id)a0;
- (void)startWithCachedCompletionHandler:(id /* block */)a0 networkCompletionHandler:(id /* block */)a1;

@end
