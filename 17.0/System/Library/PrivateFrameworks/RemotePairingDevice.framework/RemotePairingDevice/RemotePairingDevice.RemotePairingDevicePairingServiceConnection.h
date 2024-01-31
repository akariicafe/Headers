@interface RemotePairingDevice.RemotePairingDevicePairingServiceConnection : NSObject {
    void /* unknown type, empty encoding */ connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)allowPromptlessPairingForHostWithQueue:(id)a0 completion:(id /* block */)a1;
- (void)deleteAllPairingRecordsWithInvokingCompletionHandlerOn:(id)a0 completion:(id /* block */)a1;
- (void)deletePairingRecordWithUuid:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (long long)getUSBConectedHostTrustStateWithError:(id *)a0;
- (void)initiateWirelessPairingSessionWithQueue:(id)a0 completionHandler:(id /* block */)a1 customPinHandler:(id /* block */)a2;
- (id)trustedHostInfoAndReturnError:(id *)a0;

@end
