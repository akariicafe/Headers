@interface GCGenericDevicePhysicalInputButtonModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder

@property (nonatomic) long long sourceExtendedEventFieldIndex;

+ (Class)modelClass;

- (void)reset;
- (id)build;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
