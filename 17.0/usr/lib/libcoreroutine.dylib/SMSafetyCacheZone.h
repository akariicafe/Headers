@class NSString, CKRecordID, NSData, NSDate, CKRecord, RTDefaultsManager;

@interface SMSafetyCacheZone : SMCloudKitZone

@property (retain, nonatomic) NSString *token;
@property (readonly, nonatomic) CKRecordID *safetyCacheRecordID;
@property (retain, nonatomic) CKRecord *safetyCacheRecord;
@property (readonly, nonatomic) CKRecordID *accessDataRecordID;
@property (retain, nonatomic) CKRecord *accessDataRecord;
@property (readonly, nonatomic) NSData *phoneSafetyCache;
@property (readonly, nonatomic) NSData *watchSafetyCache;
@property (readonly, nonatomic) NSData *allowReadToken;
@property (readonly, nonatomic) NSDate *releaseTime;
@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;

- (void).cxx_destruct;
- (void)createRecordsWithParticipant:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)fetchAccessDataRecordWithQos:(id)a0 completion:(id /* block */)a1;
- (void)fetchSafetyCacheRecordWithQos:(id)a0 completion:(id /* block */)a1;
- (void)fetchSafetyCacheRecordsWithQos:(id)a0 completion:(id /* block */)a1;
- (void)fetchShareParticipantsWithRetryCount:(long long)a0 handle:(id)a1 qos:(id)a2 completion:(id /* block */)a3;
- (id)initWithSessionID:(id)a0 ownerName:(id)a1 token:(id)a2 defaultsManager:(id)a3 queue:(id)a4;
- (id)initWithSessionID:(id)a0 token:(id)a1 defaultsManager:(id)a2 queue:(id)a3;
- (void)saveZoneToDatabaseWithRetryCount:(long long)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)setupZoneAndShareWithHandle:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)updateAccessDataRecord:(id *)a0 cacheReleaseTime:(id)a1;
- (void)updateAccessDataRecordWithCacheReleaseTime:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)updateSafetyCacheRecordWithData:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)updateSafetyCacheWithData:(id)a0 cacheReleaseTime:(id)a1 qos:(id)a2 completion:(id /* block */)a3;

@end
