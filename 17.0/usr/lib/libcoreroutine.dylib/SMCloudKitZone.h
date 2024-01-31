@class NSString, CKDatabase, CKContainer, CKDeviceToDeviceShareInvitationToken, NSObject, CKRecordZoneID, CKShare, CKRecordZone;
@protocol OS_dispatch_queue;

@interface SMCloudKitZone : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CKContainer *container;
@property (retain, nonatomic) CKRecordZone *zone;
@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *invitationToken;
@property (readonly, nonatomic) CKRecordZoneID *zoneID;
@property (readonly, nonatomic) NSString *zoneName;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) CKDatabase *privateDatabase;
@property (readonly, nonatomic) CKDatabase *sharedDatabase;

+ (id)getContainer;
+ (void)acceptShareWithInvitationToken:(id)a0 sessionID:(id)a1 container:(id)a2 queue:(id)a3 qos:(id)a4 withCompletion:(id /* block */)a5;
+ (void)acceptShareWithShareMetadata:(id)a0 sessionID:(id)a1 container:(id)a2 queue:(id)a3 qos:(id)a4 withCompletion:(id /* block */)a5;
+ (void)configureCloudKitQos:(id)a0 configuration:(id *)a1;
+ (void)fetchAllZonesFromContainer:(id)a0 database:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
+ (void)fetchShareMetadataWithInvitationToken:(id)a0 sessionID:(id)a1 container:(id)a2 queue:(id)a3 qos:(id)a4 withCompletion:(id /* block */)a5;
+ (BOOL)shouldRetryCkError:(id)a0;
+ (void)supportsDeviceToDeviceEncryptionWithCompletion:(id /* block */)a0;

- (void).cxx_destruct;
- (void)createNewInvitationTokenWithHandle:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)deleteRecords:(id)a0 fromDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)deleteZoneFromDatabase:(id)a0 qos:(id)a1 withCompletion:(id /* block */)a2;
- (void)fetchRecord:(id)a0 fromDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)fetchShareParticipantsWithHandle:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)fetchZoneFromDatabase:(id)a0 qos:(id)a1 withCompletion:(id /* block */)a2;
- (id)initWithZone:(id)a0 queue:(id)a1;
- (void)saveRecord:(id)a0 toDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)saveRecords:(id)a0 toDatabase:(id)a1 qos:(id)a2 withCompletion:(id /* block */)a3;
- (void)saveRecordsWithRetry:(long long)a0 records:(id)a1 toDatabase:(id)a2 qos:(id)a3 withCompletion:(id /* block */)a4;
- (void)saveZoneToDatabase:(id)a0 qos:(id)a1 withCompletion:(id /* block */)a2;
- (void)updateRecord:(id)a0 inDatabase:(id)a1 qos:(id)a2 usingBlock:(id /* block */)a3 withCompletion:(id /* block */)a4;

@end
