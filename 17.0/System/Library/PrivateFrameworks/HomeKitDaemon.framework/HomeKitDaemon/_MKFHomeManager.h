@class NSUUID, NSString, NSArray, NSDate, NSSet, _MKFHAPMetadata, NSDictionary, _MKFHomeManagerHome, Protocol, MKFHomeManagerDatabaseID, NSNumber;
@protocol MKFHAPMetadata, MKFHomeManagerHome;

@interface _MKFHomeManager : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFHomeManager, MKFHomeManagerPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;
@property (class, readonly, copy, nonatomic) NSUUID *defaultModelID;

@property (copy, nonatomic) NSUUID *primitiveModelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSNumber *assistantSyncDataPosted;
@property (copy, nonatomic) NSString *controllerKeyIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) NSArray *pairingAppleAccessories;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) NSSet *accounts_;
@property (retain, nonatomic) NSSet *homes_;
@property (retain, nonatomic) NSSet *incomingInvitations_;
@property (retain, nonatomic) _MKFHAPMetadata *metadata;
@property (retain, nonatomic) _MKFHomeManagerHome *primaryHome;
@property (retain, nonatomic) NSDictionary *appDataDictionary;
@property (copy, nonatomic) NSNumber *assistantSyncDataPosted;
@property (copy, nonatomic) NSString *controllerKeyIdentifier;
@property (retain, nonatomic) NSArray *pairingAppleAccessories;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *accounts;
@property (readonly, retain, nonatomic) NSArray *homes;
@property (readonly, retain, nonatomic) NSArray *incomingInvitations;
@property (retain, nonatomic) id<MKFHAPMetadata> metadata;
@property (retain, nonatomic) id<MKFHomeManagerHome> primaryHome;
@property (readonly, copy, nonatomic) MKFHomeManagerDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)fetchWithContext:(id)a0 error:(id *)a1;

- (void)awakeFromInsert;
- (id)findIncomingInvitationsRelationWithModelID:(id)a0;
- (id)materializeOrCreateHomesRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateMetadataRelation:(BOOL *)a0;
- (id)materializeOrCreateIncomingInvitationsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findHomesRelationWithModelID:(id)a0;
- (id)hmd_modelsWithChangeType:(unsigned long long)a0 detached:(BOOL)a1 error:(id *)a2;
- (id)findAccountsRelationWithModelID:(id)a0;
- (BOOL)validateModelID:(id *)a0 error:(id *)a1;
- (id)castIfHomeManager;
- (id)materializeOrCreateAccountsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;

@end
