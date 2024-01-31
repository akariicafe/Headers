@class _TtC15DSRemotePairing15DSRemotePairing;

@interface DSRemotePairingWrapper : NSObject

@property (retain, nonatomic) _TtC15DSRemotePairing15DSRemotePairing *remotePairing;

- (id)init;
- (void).cxx_destruct;
- (id)getPairedDevicesWithCompletion:(id /* block */)a0;
- (void)removeAllPairedDevicesOnQueue:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeSelectedDevices:(id)a0 onQueue:(id)a1 withCompletion:(id /* block */)a2;

@end
