@class NSSet, NSDictionary, NSString, NSData, NSNumber;

@interface GKUpdateInviteInfo : GKInternalRepresentation

@property (retain, nonatomic) NSSet *gameParticipants;
@property (retain, nonatomic) NSSet *lobbyParticipants;
@property (retain, nonatomic) NSDictionary *playerTokenMap;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *matchID;
@property (retain, nonatomic) NSNumber *transportVersionToUse;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (void)mergeWithUpdate:(id)a0;

@end
