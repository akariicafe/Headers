@class GKGameInternal, NSString, NSDictionary, NSData, NSDate, NSArray, GKPlayerInternal;

@interface GKTurnBasedMatchInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *matchID;
@property (retain, nonatomic) NSString *status;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *lastTurnDate;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned char maxPlayers;
@property (retain, nonatomic) NSDate *deletionDate;
@property (nonatomic) char currentParticipant;
@property (nonatomic) unsigned int turnNumber;
@property (retain, nonatomic) NSString *lastTurnPlayerID;
@property (retain, nonatomic) NSData *matchData;
@property (retain, nonatomic) NSString *matchDataVersion;
@property (retain, nonatomic) NSArray *participants;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *bundleVersion;
@property (retain, nonatomic) NSString *shortBundleVersion;
@property (nonatomic) long long platform;
@property (retain, nonatomic) NSArray *exchanges;
@property (retain, nonatomic) GKGameInternal *game;
@property (retain, nonatomic) GKPlayerInternal *currentPlayer;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)activeExchangeCount;
- (id)descriptionSubstitutionMap;
- (long long)localPlayerParticipantIndex;
- (long long)previousParticipantIndex;

@end
