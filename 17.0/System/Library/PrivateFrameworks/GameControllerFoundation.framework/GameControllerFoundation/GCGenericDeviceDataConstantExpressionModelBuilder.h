@interface GCGenericDeviceDataConstantExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (nonatomic) double value;

+ (Class)modelClass;

- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
