@class NSString, NSDictionary, NSURL, NSData, NSNumber, NSArray;

@interface GKInviteInitiateResponse : GKInternalRepresentation

@property (retain, nonatomic) NSDictionary *invitedUserIDs;
@property (retain, nonatomic) NSNumber *approachUsed;
@property (retain, nonatomic) NSURL *cloudKitShareURL;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSDictionary *playerTokenMap;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *selfPseudonym;
@property (retain, nonatomic) NSData *selfPushToken;
@property (retain, nonatomic) NSNumber *transportVersionToUse;
@property (retain, nonatomic) NSArray *gameParticipantsInfo;
@property (retain, nonatomic) NSArray *lobbyParticipantsInfo;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
