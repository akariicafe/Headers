@class NSNumber, NSSet, NSArray, NSData, NSString, NSDictionary, GKSupportedTransport;

@interface GKTransportContext : GKInternalRepresentation

@property (readonly, nonatomic) NSSet *supportedTransports;
@property (readonly, nonatomic) NSData *cdxTicket;
@property (readonly, nonatomic) NSData *connectionData;
@property (readonly, nonatomic) NSArray *peerDictionaries;
@property (readonly, nonatomic) NSData *sessionToken;
@property (readonly, nonatomic) NSString *matchID;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, retain, nonatomic) NSDictionary *playerTokenMap;
@property (readonly, nonatomic) NSSet *playersAndPushTokens;
@property (readonly, nonatomic) NSSet *gameParticipants;
@property (readonly, nonatomic) NSSet *lobbyParticipants;
@property (readonly, nonatomic) NSSet *supportedTransports;
@property (readonly, nonatomic) NSData *cdxTicket;
@property (readonly, nonatomic) NSData *connectionData;
@property (readonly, nonatomic) NSArray *peerDictionaries;
@property (readonly, nonatomic) NSData *sessionToken;
@property (readonly, nonatomic) NSString *matchID;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, retain, nonatomic) NSDictionary *playerTokenMap;
@property (readonly, nonatomic) NSSet *playersAndPushTokens;
@property (readonly, nonatomic) NSSet *gameParticipants;
@property (readonly, nonatomic) NSSet *lobbyParticipants;
@property (readonly, nonatomic) NSString *localPlayerID;
@property (readonly, nonatomic) NSString *pseudonym;
@property (readonly, nonatomic) GKSupportedTransport *selectedTransport;
@property (readonly, nonatomic) NSNumber *defaultInviteVersionFromMinimumSupportedTransportVersion;
@property (nonatomic) BOOL validTransportSelected;
@property (readonly, nonatomic) NSArray *representedPlayerIDs;

+ (id)syncQueue;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (void)removeGameParticipantsIfExists:(id)a0;
- (void)addGameParticipants:(id)a0;
- (void)addLobbyParticipants:(id)a0;
- (void)addTTRMultiplayerParticipant:(id)a0;
- (BOOL)allowEarlyConnection;
- (id)defaultTransportWithForceEnabledTransports:(id)a0 andForceDisabledTransports:(id)a1;
- (void)enrichConnectionDictionary:(id)a0 inviteResponse:(id)a1;
- (void)enrichServerRequest:(id)a0 andInviteResponse:(id)a1;
- (void)enrichServerRequest:(id)a0 withMatchRequest:(id)a1 selfPseudonym:(id)a2;
- (void)enrichServerRequestWithConnectionData:(id)a0;
- (id)formAnInviteUpdate;
- (id)gameParticipantsServerRepresentationsWithSelfPseudonym:(id)a0;
- (id)initWithLocalPlayerID:(id)a0 localPseudonym:(id)a1 sessionID:(id)a2;
- (id)initWithSupportedTransports:(id)a0;
- (id)initWithValidTransports:(id)a0 localPlayerID:(id)a1;
- (BOOL)inviteeShouldAwaitInviteUpdate;
- (void)performUpdateSync:(id /* block */)a0;
- (id)previouslyFetchedOnlineConnectionData;
- (void)removeLobbyParticipantsIfExists:(id)a0;
- (void)selectDefaultTransport;
- (void)selectTransportWith:(id)a0;
- (BOOL)shouldDelayConnectionForMatchResponse:(id)a0;
- (BOOL)shouldFilterGuestWhenSendingToAll;
- (BOOL)shouldSendInviteUpdate;
- (id)supportedTransportVersions;
- (BOOL)supportsTransportRequiredInTheInvite:(id)a0;
- (void)updateAfterAcceptingRemoveInvite:(id)a0 acceptedResponse:(id)a1;
- (void)updateAfterInviteeAcceptedUserInfo:(id)a0;
- (void)updateForInviteAcceptWithConnectionData:(id)a0;
- (void)updateForInviteInitiationWithOnlineConnectionData:(id)a0;
- (void)updateForLegacyNearbyInvite;
- (void)updateForMatchRequestWithConnectionData:(id)a0;
- (void)updateForMatchResponse:(id)a0 serverHosted:(BOOL)a1;
- (void)updateWithForceEnabledTransports:(id)a0 andForceDisabledTransports:(id)a1;
- (void)updateWithInfoFromTransport:(id)a0;
- (void)updateWithInviteInitiateResponse:(id)a0;
- (void)updateWithInviteUpdateInfo:(id)a0;
- (id)updatedParticipantsAfterRemoving:(id)a0 fromOldParticipants:(id)a1;

@end
