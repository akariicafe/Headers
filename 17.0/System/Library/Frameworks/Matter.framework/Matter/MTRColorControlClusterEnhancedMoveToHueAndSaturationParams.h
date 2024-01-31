@class NSNumber;

@interface MTRColorControlClusterEnhancedMoveToHueAndSaturationParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *enhancedHue;
@property (copy, nonatomic) NSNumber *saturation;
@property (copy, nonatomic) NSNumber *transitionTime;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
