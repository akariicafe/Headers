@interface DSRemotePairing.DSRemotePairing : NSObject

- (id)init;
- (id)getPairedDevicesWithCompletion:(id /* block */)a0;
- (void)removeAllPairedDevicesWithInvokingCompletionHandlerOn:(id)a0 completion:(id /* block */)a1;
- (void)removeSelectedDevices:(id)a0 invokingCompletionHandlerOn:(id)a1 completion:(id /* block */)a2;

@end
