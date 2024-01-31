@class NSMutableArray;

@interface SMSessionReceiptZone : SMCloudKitZone

@property (retain, nonatomic) NSMutableArray *sessionReceipts;
@property (nonatomic) BOOL sessionReceiptZoneAvailable;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_writeSessionReceiptRecord:(id)a0 completion:(id /* block */)a1;
- (id)checkSessionReceiptFieldsAvailibility:(id)a0 sessionID:(id)a1;
- (void)checkSessionReceiptZoneAvailibilityWithCompletion:(id /* block */)a0;
- (void)fetchSessionReceiptRecordWithSessionID:(id)a0 qos:(id)a1 completion:(id /* block */)a2;
- (void)setupZoneWithQos:(id)a0 completion:(id /* block */)a1;
- (void)writeSessionReceiptRecord:(id)a0 completion:(id /* block */)a1;

@end
