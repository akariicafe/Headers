@class NSString;

@interface TRIBackgroundMLTaskIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *bmltTaskId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *factorPackId;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBMLTTaskId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (id)initWithBMLTaskId:(id)a0 deploymentId:(int)a1 factorPackId:(id)a2;
- (BOOL)isEqualToBMLTTaskIdentifiers:(id)a0;

@end
