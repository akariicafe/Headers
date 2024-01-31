@class NSUUID, NSString, NSArray, CKRecordID, HMDCloudRecord, NSSet, HMDBackingStoreModelObject, CKRecord, NSMutableSet;

@interface HMDCloudChange : HMFObject <HMDBackingStoreChangeObject, HMDBackingStoreRecordMapping>

@property (retain, nonatomic) HMDBackingStoreModelObject *objectChange;
@property (nonatomic) unsigned long long changeType;
@property (nonatomic) unsigned long long applyType;
@property (readonly, nonatomic) NSMutableSet *rowIDsSet;
@property (readonly, nonatomic) NSUUID *parentObjectID;
@property (readonly, nonatomic) NSUUID *objectID;
@property (readonly, nonatomic) NSString *recordName;
@property (readonly, nonatomic, getter=isAdded) BOOL addChange;
@property (readonly, nonatomic, getter=isUpdated) BOOL updateChange;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleteChange;
@property (readonly, nonatomic, getter=isInvalid) BOOL invalidChange;
@property (readonly, nonatomic, getter=isDropAndDoNotApply) BOOL dropAndDoNotApply;
@property (readonly, nonatomic, getter=isDropAfterApply) BOOL dropAfterApply;
@property (readonly, nonatomic, getter=isDropStagedAfterApply) BOOL dropStagedAfterApply;
@property (readonly, nonatomic, getter=isPushAfterApply) BOOL pushAfterApply;
@property (readonly, nonatomic) NSArray *rowIDs;
@property (readonly, nonatomic) HMDCloudRecord *cloudRecord;
@property (readonly, nonatomic) HMDCloudRecord *deletedCloudRecord;
@property (readonly, nonatomic) CKRecord *record;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (readonly, nonatomic) HMDBackingStoreModelObject *change;
@property (readonly, nonatomic) NSSet *dependentUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *parentUuid;
@property (readonly, nonatomic) NSString *type;

+ (id)shortDescription;

- (id)init;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)_initWithObjectChange:(id)a0 cloudObjectRecord:(id)a1;
- (void)forceChangeToDelete;
- (void)forceChangeToInvalid;
- (id)initWithCloudObjectRecord:(id)a0;
- (id)initWithObjectChange:(id)a0;
- (void)replayChange:(id)a0 stagedChange:(id)a1;
- (void)resetRecord;
- (void)updateChangeWithRecord:(id)a0;
- (void)updateCloudRecord:(id)a0;
- (void)updateDeletedCloudRecord:(id)a0;
- (void)updateWithObjectChange:(id)a0;

@end
