@class NSString;

@interface GCGenericDeviceDataInputElementValueExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *elementIdentifier;
@property (nonatomic) long long scaleType;

+ (Class)modelClass;

- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
