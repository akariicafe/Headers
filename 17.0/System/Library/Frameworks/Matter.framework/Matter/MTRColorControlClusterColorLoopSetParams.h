@class NSNumber;

@interface MTRColorControlClusterColorLoopSetParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *updateFlags;
@property (copy, nonatomic) NSNumber *action;
@property (copy, nonatomic) NSNumber *direction;
@property (copy, nonatomic) NSNumber *time;
@property (copy, nonatomic) NSNumber *startHue;
@property (copy, nonatomic) NSNumber *optionsMask;
@property (copy, nonatomic) NSNumber *optionsOverride;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
