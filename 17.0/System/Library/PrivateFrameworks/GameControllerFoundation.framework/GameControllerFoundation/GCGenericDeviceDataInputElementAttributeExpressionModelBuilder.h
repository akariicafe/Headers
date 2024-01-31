@class NSString;

@interface GCGenericDeviceDataInputElementAttributeExpressionModelBuilder : GCGenericDeviceDataProcessorExpressionModelBuilder

@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) NSString *attribute;

+ (Class)modelClass;

- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
