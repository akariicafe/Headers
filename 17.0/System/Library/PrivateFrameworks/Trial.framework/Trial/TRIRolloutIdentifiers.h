@class NSString;

@interface TRIRolloutIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) NSString *rampId;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToRolloutIdentifiers:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2 rampId:(id)a3;

@end
