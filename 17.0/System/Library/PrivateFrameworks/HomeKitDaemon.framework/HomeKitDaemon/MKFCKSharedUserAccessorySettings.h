@class NSUUID, NSString, MKFCKSharedUserDataRoot;

@interface MKFCKSharedUserAccessorySettings : MKFCKSharedUserData <HMDCoreDataCloudTransformable>

@property (copy, nonatomic) NSUUID *accessoryModelID;
@property (nonatomic) BOOL listeningHistoryEnabled;
@property (nonatomic) BOOL mediaContentProfileEnabled;
@property (nonatomic) BOOL personalRequestsEnabled;
@property (retain, nonatomic) MKFCKSharedUserDataRoot *root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (id)createWithHomeModelID:(id)a0 accessoryModelID:(id)a1 persistentStore:(id)a2 context:(id)a3;

- (BOOL)_importIntoLocalUserModel:(id)a0 context:(id)a1;
- (BOOL)_importWithContext:(id)a0;
- (BOOL)importIntoLocalUserModel:(id)a0 context:(id)a1;

@end
