@class NSString, NSArray, NSNumber;

@interface GCGenericDevicePhysicalInputElementModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *names;
@property (copy, nonatomic, getter=isAnalog) NSNumber *analog;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (copy, nonatomic) NSString *symbolName;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
