@class NSString;

@interface TRIFactorsStateExperimentIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1;
- (BOOL)isEqualToIdentifiers:(id)a0;

@end
