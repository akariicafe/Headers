@interface MBTargetDeviceTransferTask : MBDeviceTransferTask <MBManagerDelegate> {
    _Atomic BOOL _startedPreflight;
    _Atomic BOOL _startedKeychainTransfer;
    _Atomic BOOL _startedKeychainDataTransfer;
    _Atomic BOOL _startedKeychainDataImport;
    _Atomic BOOL _startedDataTransfer;
}

@property (copy, nonatomic) id /* block */ preflightCompletionHandler;
@property (copy, nonatomic) id /* block */ keychainTransferCompletionHandler;

- (void)_cancel;
- (long long)taskType;
- (void)startKeychainDataTransferWithCompletionHandler:(id /* block */)a0;
- (void)start;
- (void)startPreflightWithCompletionHandler:(id /* block */)a0;
- (void)startKeychainDataImportWithKeychainInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)startKeychainTransferWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (void)startDataTransferWithPreflightInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)_finishWithError:(id)a0;
- (id)initWithFileTransferSession:(id)a0;
- (void)manager:(id)a0 didFinishDeviceTransferPreflight:(id)a1 error:(id)a2;
- (void)manager:(id)a0 didFinishDeviceTransferWithError:(id)a1;
- (void)manager:(id)a0 didUpdateDeviceTransferProgress:(id)a1;
- (BOOL)_startWithError:(id *)a0;
- (void)_finishKeychainTransferWithError:(id)a0 completionHandler:(id /* block */)a1;
- (void)manager:(id)a0 didFinishDeviceTransferKeychainTransferWithError:(id)a1;

@end
