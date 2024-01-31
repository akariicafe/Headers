@class NSMutableDictionary, GKPlayer, NSDictionary, NSMutableArray;

@interface GKMatchEventQueue : NSObject <GKPlayerConnectionContext>

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) GKPlayer *player;
@property (retain, nonatomic) GKPlayer *hostPlayer;
@property (retain, nonatomic) NSMutableDictionary *connectionInfo;
@property (nonatomic) long long playerState;
@property (nonatomic) long long deferedPlayerState;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL counted;
@property (nonatomic) BOOL okToSend;
@property (nonatomic) BOOL relayInitiated;
@property (nonatomic) BOOL hasInitRelayInfo;
@property (nonatomic) BOOL hasUpdateRelayInfo;
@property (nonatomic) BOOL invitedByLocalPlayer;
@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) NSDictionary *info;

- (id)init;
- (void).cxx_destruct;

@end
