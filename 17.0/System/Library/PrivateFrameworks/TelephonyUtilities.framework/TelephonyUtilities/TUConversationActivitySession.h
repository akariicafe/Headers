@class NSUUID, NSDate, NSXPCListenerEndpoint, NSString, NSSet, TUConversationActivity, TUHandle, NSNumber;

@interface TUConversationActivitySession : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) TUConversationActivity *activity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) BOOL isLocallyInitiated;
@property (nonatomic, getter=isUsingAirplay) BOOL usingAirplay;
@property (retain, nonatomic) NSDate *localCreationTimestamp;
@property (retain, nonatomic) NSDate *permittedJoinTimestamp;
@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSNumber *clientAudioSessionID;
@property (nonatomic) BOOL isLightweightPrimaryInitiated;
@property (readonly, nonatomic) BOOL isFirstJoin;
@property (nonatomic, getter=isPermittedToJoin) BOOL permittedToJoin;
@property (readonly, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) NSString *persistentSceneIdentifier;
@property (nonatomic) unsigned long long distributionCount;
@property (readonly, nonatomic) unsigned long long applicationState;
@property (retain, nonatomic) TUHandle *terminatingHandle;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivity:(id)a0 locallyInitiated:(BOOL)a1 timestamp:(id)a2 isFirstJoin:(BOOL)a3;
- (id)initWithActivity:(id)a0 state:(unsigned long long)a1 endpoint:(id)a2 locallyInitiated:(BOOL)a3 timestamp:(id)a4 isFirstJoin:(BOOL)a5;
- (id)initWithActivity:(id)a0 state:(unsigned long long)a1 uuid:(id)a2 endpoint:(id)a3 locallyInitiated:(BOOL)a4 timestamp:(id)a5 isFirstJoin:(BOOL)a6 activeRemoteParticipants:(id)a7 applicationState:(unsigned long long)a8;
- (id)initWithActivity:(id)a0 uuid:(id)a1 locallyInitiated:(BOOL)a2 timestamp:(id)a3 isFirstJoin:(BOOL)a4;
- (id)initWithTUConversationActivitySession:(id)a0;
- (BOOL)isEqualToConversationActivitySession:(id)a0;
- (void)launchApplicationWithForcedURL:(id)a0 completion:(id /* block */)a1;
- (id)publicCopy;

@end
