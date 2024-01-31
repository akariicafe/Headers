@class NSString, NSData, NSNumber;

@interface FTRelayCancelMessage : FTFaceTimeMessage <NSCopying>

@property (copy) NSString *peerID;
@property (copy) NSData *peerPushToken;
@property (copy) NSNumber *relayType;
@property (copy) NSNumber *reason;
@property (copy) NSData *relayConnectionID;
@property (copy) NSData *relayCandidateID;
@property (copy) NSData *selfRelayIP;
@property (copy) NSNumber *selfRelayPort;
@property (copy) NSData *peerRelayIP;
@property (copy) NSNumber *peerRelayPort;

- (void)dealloc;
- (id)bagKey;
- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)requiredKeys;

@end
