@class ADPointCloudAggregator, ADAggregationParameters;

@interface ARDepthPointCloudCoalescer : NSObject {
    ADAggregationParameters *_aggregationParameters;
    ADPointCloudAggregator *_aggregator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _aggregatorLock;
}

@property (copy, nonatomic) ADAggregationParameters *aggregationParameters;

- (id)init;
- (void).cxx_destruct;
- (id)_createModifiedParametersIfNecessary:(id)a0;
- (void)addDepthPointCloudData:(id)a0;
- (id)depthPointCloudWithPose:(id)a0 imageData:(id)a1;

@end
