@class RMAttitude;

@interface RMPose : RMLogItem

@property (nonatomic) double machAbsTimestamp;
@property (readonly, nonatomic) RMAttitude *attitude;
@property (readonly, nonatomic) double consumedAuxTimestamp;
@property (readonly, nonatomic) double receivedAuxTimestamp;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAttitude:(id)a0 consumedAuxTimestamp:(double)a1 receivedAuxTimestamp:(double)a2 machAbsTimestamp:(double)a3;

@end
