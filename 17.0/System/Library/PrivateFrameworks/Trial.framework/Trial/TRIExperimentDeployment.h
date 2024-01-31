@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;

+ (id)deploymentWithExperimentId:(id)a0 deploymentId:(int)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithReplacementExperimentId:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToDeployment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1;

@end
