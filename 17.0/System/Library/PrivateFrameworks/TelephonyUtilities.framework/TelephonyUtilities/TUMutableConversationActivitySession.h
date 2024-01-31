@class NSXPCListenerEndpoint, NSUUID, NSSet, TUConversationActivity, NSDate, NSString, TUHandle;

@interface TUMutableConversationActivitySession : TUConversationActivitySession

@property (retain, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) TUConversationActivity *activity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (nonatomic) BOOL isLocallyInitiated;
@property (nonatomic) BOOL isLightweightPrimaryInitiated;
@property (nonatomic) BOOL isFirstJoin;
@property (nonatomic, getter=isPermittedToJoin) BOOL permittedToJoin;
@property (retain, nonatomic) NSSet *activeRemoteParticipants;
@property (retain, nonatomic) NSString *persistentSceneIdentifier;
@property (nonatomic) unsigned long long distributionCount;
@property (retain, nonatomic) TUHandle *terminatingHandle;
@property (nonatomic, getter=isUsingAirplay) BOOL usingAirplay;
@property (nonatomic) unsigned long long applicationState;


@end
