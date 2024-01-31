@class NSUUID, NSString, NSDate;

@interface MKFCKSharedHome : MKFCKModel <HMDCoreDataCloudTransformable>

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSUUID *defaultRoomModelID;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ownerAccountHandle;
@property (copy, nonatomic) NSUUID *ownerModelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
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
+ (id)createWithModelID:(id)a0 persistentStore:(id)a1 context:(id)a2;
+ (id)rootKeyPath;

- (id)createLocalModelWithContext:(id)a0;
- (id)homeModelID;

@end
