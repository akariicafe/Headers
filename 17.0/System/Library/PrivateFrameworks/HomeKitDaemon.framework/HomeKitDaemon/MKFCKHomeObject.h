@class NSUUID, MKFCKHome, NSString;

@interface MKFCKHomeObject : MKFCKModel <HMDCoreDataCloudTransformable>

@property (copy, nonatomic) NSUUID *homeModelID;
@property (retain, nonatomic) MKFCKHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)rootKeyPath;
+ (unsigned long long)cloudStoreTypes;

- (void)willSave;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)isReadyToImportIntoLocalModelWithContext:(id)a0;
- (BOOL)validateHome:(id *)a0 error:(id *)a1;
- (BOOL)validateHomeModelID:(id *)a0 error:(id *)a1;

@end
