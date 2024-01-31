@class NSString, GKPlayerInternal, NSData, NSDictionary, NSNumber, NSSet;

@interface GKInviteInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *inviteID;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) GKPlayerInternal *player;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) NSDictionary *localizableMessage;
@property (nonatomic) unsigned long long matchType;
@property (nonatomic) unsigned long long playerGroup;
@property (nonatomic) unsigned int playerAttributes;
@property (retain, nonatomic) NSString *peerID;
@property (retain, nonatomic) NSData *peerPushToken;
@property (nonatomic) unsigned long long peerNATType;
@property (retain, nonatomic) NSData *peerNATIP;
@property (retain, nonatomic) NSData *peerBlob;
@property (retain, nonatomic) NSNumber *transportVersionToUse;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *peerPseudonym;
@property (retain, nonatomic) NSString *rid;
@property (nonatomic) unsigned char version;
@property (retain, nonatomic) NSString *participantID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) BOOL isNearby;
@property (nonatomic) BOOL isMessageBasedInvite;
@property (nonatomic) BOOL isNearbyInvite;
@property (nonatomic) BOOL isSharePlayInvite;
@property (nonatomic) NSNumber *declineReason;
@property (retain, nonatomic) NSSet *gameParticipants;
@property (retain, nonatomic) NSSet *lobbyParticipants;

+ (id)secureCodedPropertyKeys;
+ (id)inviteWithBulletin:(id)a0;
+ (id)nearbyInviteIDForPlayerID:(id)a0 deviceID:(id)a1 bundleID:(id)a2;
+ (id)inviteFromNearbyPlayer:(id)a0 participantID:(id)a1 deviceID:(id)a2 bundleID:(id)a3 connectionData:(id)a4;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isNearby;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionSubstitutionMap;

@end
