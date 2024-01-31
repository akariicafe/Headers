@class NSString, NSArray;

@interface TRIExperimentAllocationStatus : TRIAllocationStatus

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSArray *namespaces;

+ (BOOL)supportsSecureCoding;

- (BOOL)isEqualToStatus:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(unsigned char)a0 date:(id)a1 experimentId:(id)a2 deploymentId:(int)a3 treatmentId:(id)a4 namespaces:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned char)a0 date:(id)a1 experimentId:(id)a2 deploymentId:(int)a3 treatmentId:(id)a4;
- (id)initWithCoder:(id)a0;

@end
