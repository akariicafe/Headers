@interface PLSMCOutputObject : NSObject

@property (nonatomic) double channelValue;
@property (nonatomic) unsigned int cycleCount;
@property (nonatomic) unsigned char variant;

+ (id)objectWithChannelValue:(double)a0 cycleCount:(unsigned int)a1 variant:(unsigned char)a2;

@end
