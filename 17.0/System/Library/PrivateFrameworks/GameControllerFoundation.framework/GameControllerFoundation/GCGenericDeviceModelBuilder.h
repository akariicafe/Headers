@class NSString, GCGenericDevicePhysicalInputModel, GCGenericDeviceDriverModel, NSNumber;

@interface GCGenericDeviceModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *productCategory;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSNumber *formFitting;
@property (copy, nonatomic) GCGenericDeviceDriverModel *driver;
@property (copy, nonatomic) GCGenericDevicePhysicalInputModel *physicalInput;

- (id)init;
- (unsigned long long)hash;
- (void)reset;
- (id)build;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
