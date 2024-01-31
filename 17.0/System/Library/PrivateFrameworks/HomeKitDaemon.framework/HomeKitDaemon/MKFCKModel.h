@class NSArray, NSString, NSUUID, NSDate, NSNumber;

@interface MKFCKModel : HMDManagedObject {
    NSNumber *_canonical;
}

@property (class, readonly) NSArray *defaultPreloadedProperties;
@property (class, readonly) NSString *rootKeyPath;
@property (class, readonly) unsigned long long cloudStoreTypes;

@property (copy, nonatomic) NSUUID *primitiveFlags;
@property (readonly, nonatomic) BOOL shouldSkipValidationDuringImport;
@property (readonly, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (copy, nonatomic) NSUUID *flags;
@property (readonly, nonatomic, getter=isFake) BOOL fake;
@property (copy, nonatomic) NSUUID *modelID;

+ (id)logCategory;
+ (id)modelWithModelID:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)appendDefaultPreloadedPropertiesTo:(id)a0;
+ (id)canonicalModelForModels:(id)a0 context:(id)a1;
+ (id)createWithLocalModel:(id)a0 context:(id)a1;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;
+ (id)modelWithObjectID:(id)a0 context:(id)a1 error:(id *)a2;
+ (id)predicateWithModelID:(id)a0;
+ (id)predicateWithModelIDs:(id)a0;

- (void)willSave;
- (void)awakeFromInsert;
- (void)didTurnIntoFault;
- (id)redactedDescription;
- (id)description;
- (BOOL)validateModelID:(id *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)convertToFakeModel;
- (BOOL)copyPropertiesFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)copyPropertiesIntoLocalModel:(id)a0 context:(id)a1;
- (id)createLocalModelWithContext:(id)a0;
- (long long)ensureCanonicalModel;
- (id)fetchEquivalentModels:(id *)a0;
- (id)fetchLocalModelWithContext:(id)a0;
- (id)hmd_debugIdentifier;
- (BOOL)isDeletedLocallyWithContext:(id)a0;
- (id)predicateMatchingEquivalentModels;
- (id)relationshipForLocalName:(id)a0 localModel:(id)a1;
- (BOOL)validateFlags:(id *)a0 error:(id *)a1;
- (BOOL)validateWriterTimestamp:(id *)a0 error:(id *)a1;
- (BOOL)validateWriterVersion:(id *)a0 error:(id *)a1;

@end
