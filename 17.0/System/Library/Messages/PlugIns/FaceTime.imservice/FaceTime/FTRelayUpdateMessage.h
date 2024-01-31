@class NSData, NSString, NSNumber;

@interface FTRelayUpdateMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSData *selfPushToken;
@property (copy) NSData *selfRelayBlob;
@property (copy) NSString *peerID;
@property (copy) NSData *peerPushToken;
@property (copy) NSNumber *relayType;
@property (copy) NSData *relayConnectionID;
@property (copy) NSData *relayTransactionIDAlloc;
@property (copy) NSData *relayTokenAllocRes;
@property (copy) NSData *relayCandidateID;
@property (copy) NSData *selfRelayIP;
@property (copy) NSNumber *selfRelayPort;
@property (copy) NSData *selfRelayNATIP;
@property (copy) NSNumber *selfRelayNATPort;
@property (copy) NSData *peerRelayIP;
@property (copy) NSNumber *peerRelayPort;

- (void)dealloc;
- (id)bagKey;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end
