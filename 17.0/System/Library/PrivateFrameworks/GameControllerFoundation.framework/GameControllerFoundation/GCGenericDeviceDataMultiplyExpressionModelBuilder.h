@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceDataMultiplyExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *leftExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *rightExpression;

+ (Class)modelClass;

- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
