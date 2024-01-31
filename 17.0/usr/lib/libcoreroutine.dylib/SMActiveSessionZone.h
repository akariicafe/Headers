@class CKRecord;

@interface SMActiveSessionZone : SMCloudKitZone

@property (nonatomic) BOOL activeSessionZoneAvailable;
@property (retain, nonatomic) CKRecord *activeSessionRecord;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)checkActiveSessionDetailsZoneAvailibilityWithQos:(id)a0 completion:(id /* block */)a1;
- (void)deleteActiveSessionDetailsRecordWithQos:(id)a0 completion:(id /* block */)a1;
- (void)fetchActiveSessionDetailsRecordWithQos:(id)a0 completion:(id /* block */)a1;
- (void)setupZoneWithQos:(id)a0 completion:(id /* block */)a1;
- (void)writeActiveSessionDetailsRecord:(id)a0 qos:(id)a1 completion:(id /* block */)a2;

@end
