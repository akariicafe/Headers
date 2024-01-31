@interface MBSourceDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate>

- (void)_cancel;
- (long long)taskType;
- (void)start;
- (void)resume;
- (void)cancel;
- (void)_finishWithError:(id)a0;
- (id)initWithFileTransferSession:(id)a0;
- (void)manager:(id)a0 didFinishDeviceTransferKeychainTransfer:(id)a1;
- (void)manager:(id)a0 didFinishDeviceTransferPreflight:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didFinishDeviceTransferWithError:(id)a1;
- (void)manager:(id)a0 didUpdateDeviceTransferProgress:(id)a1;
- (BOOL)_startWithError:(id *)a0;
- (void)_shortenPrebuddyExpirationIfNeeded;

@end
