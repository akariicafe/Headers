@class NSString, IDSGFTMetricsRequest;

@interface IDSGlobalLinkRequestMetadata : NSObject

@property (readonly) double startTime;
@property (readonly) NSString *token;
@property (readonly) IDSGFTMetricsRequest *metricsRequest;

- (void).cxx_destruct;
- (id)initWithStartTime:(double)a0 token:(id)a1 metricsRequest:(id)a2;

@end
