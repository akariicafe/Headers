@interface MADVideoSafetyFrameSampling : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long framesPerSync;
@property (readonly, nonatomic) unsigned long long frameLimit;
@property (readonly, nonatomic) BOOL uniformSampling;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFramesPerSync:(unsigned long long)a0 frameLimit:(unsigned long long)a1 uniformSampling:(BOOL)a2;
- (id)initWithFrameLimit:(unsigned long long)a0 uniformSampling:(BOOL)a1;

@end
