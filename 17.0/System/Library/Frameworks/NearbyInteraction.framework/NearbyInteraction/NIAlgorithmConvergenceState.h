@interface NIAlgorithmConvergenceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long convergence;
@property (nonatomic) BOOL insufficientSignalStrength;
@property (nonatomic) BOOL insufficientHorizontalSweep;
@property (nonatomic) BOOL insufficientVerticalSweep;
@property (nonatomic) BOOL insufficientMovement;
@property (nonatomic) BOOL insufficientLighting;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAlgorithmConvergenceState:(id)a0;
- (id)initWithConvergenceStatus:(long long)a0;

@end
