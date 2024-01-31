@class NSString;

@interface NightingaleTelemetryIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *reachId;

- (unsigned long long)hash;
- (BOOL)isEqualToExperimentIdentifiers:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(int)a2 reachId:(id)a3;

@end
