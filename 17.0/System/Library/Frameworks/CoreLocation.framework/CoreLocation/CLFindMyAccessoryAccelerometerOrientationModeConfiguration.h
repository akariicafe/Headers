@interface CLFindMyAccessoryAccelerometerOrientationModeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int threshold;
@property (nonatomic) unsigned short sleepDuration_ms;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithThreshold:(unsigned int)a0 sleepDuration:(unsigned short)a1;

@end
