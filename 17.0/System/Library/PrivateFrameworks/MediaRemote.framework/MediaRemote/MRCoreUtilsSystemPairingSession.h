@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (BOOL)systemPairingAvailable;
+ (id)pairingManager;

- (BOOL)shouldAutoRetryPairingExchange:(id)a0;
- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate { } *)a0;
- (id)mediaRemotePairedDevices;
- (id)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)removePeer;
- (id)updatePeer;

@end
