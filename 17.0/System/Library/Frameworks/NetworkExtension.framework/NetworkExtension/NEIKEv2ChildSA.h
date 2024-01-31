@class NSError, NSData, NSArray, NEIKEv2DHProtocol, NEIKEv2IKESA, NEIKEv2ESPSPI, NEIKEv2ChildSAProposal, NEIKEv2ChildSAConfiguration;

@interface NEIKEv2ChildSA : NSObject {
    BOOL _shouldSendStateUpdate;
    BOOL _isFirstChild;
    BOOL _isInitiator;
    BOOL _sequencePerTrafficClassSupported;
    unsigned short _incomingDatabaseReqID;
    unsigned short _outgoingDatabaseReqID;
    unsigned int _childID;
    NEIKEv2IKESA *_ikeSA;
    unsigned long long _state;
    NSError *_error;
    NEIKEv2ChildSAConfiguration *_configuration;
    NEIKEv2ChildSAProposal *_chosenProposal;
    NSArray *_localTrafficSelectors;
    NSArray *_remoteTrafficSelectors;
    NSData *_localNonce;
    NSData *_remoteNonce;
    struct __SecKey { } *_ecdhPrivateKeyRef;
    NSData *_dhPublicKey;
    NSData *_dhRemotePublicKey;
    struct OpaqueSecDHContext { } *_dhContext;
    unsigned long long _dhPublicKeySize;
    NEIKEv2DHProtocol *_remotePreferredDHProtocol;
    NSData *_incomingEncryptionKey;
    NSData *_incomingIntegrityKey;
    NSData *_outgoingEncryptionKey;
    NSData *_outgoingIntegrityKey;
    NEIKEv2ChildSAProposal *_initiatorRekeyProposal;
    NEIKEv2ChildSAProposal *_initiatorRekeyNonPFSProposal;
    NEIKEv2ChildSAProposal *_responderRekeyProposal;
    NEIKEv2ESPSPI *_rekeyedSPI;
    NEIKEv2ESPSPI *_rekeyedRemoteSPI;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
