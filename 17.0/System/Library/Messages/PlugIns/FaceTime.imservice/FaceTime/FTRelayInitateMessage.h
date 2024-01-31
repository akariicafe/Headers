@class NSData, NSNumber, NSString;

@interface FTRelayInitateMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSData *selfPushToken;
@property (copy) NSNumber *selfNatType;
@property (copy) NSNumber *selfNATIP;
@property (copy) NSString *peerID;
@property (copy) NSData *peerPushToken;
@property (copy) NSNumber *peerNatType;
@property (copy) NSNumber *peerNATIP;
@property (copy) NSData *relayCandidateID;
@property (copy) NSNumber *relayType;
@property (copy) NSData *relayConnectionId;
@property (copy) NSData *relayTransactionIdAlloc;
@property (copy) NSData *relayTokenAllocReq;
@property (copy) NSData *selfRelayIP;
@property (copy) NSNumber *selfRelayPort;
@property (copy) NSData *peerRelayIP;
@property (copy) NSNumber *peerRelayPort;

- (void)dealloc;
- (id)bagKey;
- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end
