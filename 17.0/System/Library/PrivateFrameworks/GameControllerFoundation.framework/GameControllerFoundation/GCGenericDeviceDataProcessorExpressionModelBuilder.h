@interface GCGenericDeviceDataProcessorExpressionModelBuilder : NSObject

@property (class, readonly) Class modelClass;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (id)build;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
