@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataAddExpressionModel : GCGenericDeviceDataProcessorExpressionModel

@property (readonly) GCGenericDeviceDataProcessorExpressionModel *leftExpression;
@property (readonly) GCGenericDeviceDataProcessorExpressionModel *rightExpression;

+ (BOOL)supportsSecureCoding;
+ (id)description;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)_buildPullExpressionWithOverrideBuilder:(id /* block */)a0 error:(out id *)a1;

@end
