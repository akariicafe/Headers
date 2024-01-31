@class NSNumber;

@interface MTRColorControlClusterMoveColorTemperatureParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *moveMode;
@property (copy, nonatomic) NSNumber *rate;
@property (copy, nonatomic) NSNumber *colorTemperatureMinimumMireds;
@property (copy, nonatomic) NSNumber *colorTemperatureMaximumMireds;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
