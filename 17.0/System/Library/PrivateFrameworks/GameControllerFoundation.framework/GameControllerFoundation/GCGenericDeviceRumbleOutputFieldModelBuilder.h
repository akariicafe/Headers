@class GCGenericDeviceDataProcessorExpressionModel;

@interface GCGenericDeviceRumbleOutputFieldModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *valueExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *offsetExpression;
@property (copy, nonatomic) GCGenericDeviceDataProcessorExpressionModel *sizeExpression;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)initializeWithModel:(id)a0;

@end
