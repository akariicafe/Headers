@class NSString, NSDictionary, NSData, NSNumber;

@interface IMAVChatParticipantCallInfo : NSObject

@property (nonatomic) unsigned int callID;
@property (nonatomic) long long state;
@property (retain, nonatomic) NSData *remoteNATIP;
@property (retain, nonatomic) NSData *localNATIP;
@property (retain, nonatomic) NSData *localSKEData;
@property (retain, nonatomic) NSData *remoteSKEData;
@property (retain, nonatomic) NSData *remoteICEData;
@property (retain, nonatomic) NSData *localICEData;
@property (retain, nonatomic) NSNumber *remoteNATType;
@property (retain, nonatomic) NSNumber *localNATType;
@property (retain, nonatomic) NSString *peerCN;
@property (retain, nonatomic) NSNumber *peerProtocolVersion;
@property (readonly, nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isBeingHandedOff;
@property (nonatomic) BOOL isReinitiate;
@property (nonatomic) BOOL inviteNeedsDelivery;
@property (readonly, nonatomic) BOOL isAudioPaused;
@property (nonatomic) BOOL isVideoPaused;
@property (retain, nonatomic) NSDictionary *relayInitiate;
@property (retain, nonatomic) NSDictionary *relayUpdate;
@property (retain, nonatomic) NSDictionary *relayCancel;
@property (nonatomic) unsigned long long localConnectionType;
@property (nonatomic) unsigned long long remoteConnectionType;

- (id)init;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
