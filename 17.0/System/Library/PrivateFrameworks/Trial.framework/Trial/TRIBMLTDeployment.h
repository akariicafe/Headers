@class NSString;

@interface TRIBMLTDeployment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *backgroundMLTaskId;
@property (readonly, nonatomic) int deploymentId;

+ (id)deploymentWithBackgroundMLTaskId:(id)a0 deploymentId:(int)a1;

- (id)init;
- (unsigned long long)hash;
- (BOOL)hasDeploymentId;
- (id)taskTag;
- (void)encodeWithCoder:(id)a0;
- (id)shortDesc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToDeployment:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementBackgroundMLTaskId:(id)a0;
- (id)initWithBackgroundMLTaskId:(id)a0 deploymentId:(int)a1;

@end
