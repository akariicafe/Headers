@interface VCIDRSchedulerStream : NSObject

@property (nonatomic) unsigned int keyFrameInterval;
@property (nonatomic) unsigned int framerate;
@property (nonatomic) unsigned int weightFactor;
@property (nonatomic) unsigned int framePosition;
@property (nonatomic) unsigned int framesPerIdrPeriod;

+ (id)schedulerStreamWithKeyFrameInterval:(unsigned int)a0 framerate:(unsigned int)a1 weightFactor:(unsigned int)a2;

- (id)description;
- (long long)compareWeightFactor:(id)a0;
- (id)initWithKeyFrameInterval:(unsigned int)a0 framerate:(unsigned int)a1 weightFactor:(unsigned int)a2;

@end
