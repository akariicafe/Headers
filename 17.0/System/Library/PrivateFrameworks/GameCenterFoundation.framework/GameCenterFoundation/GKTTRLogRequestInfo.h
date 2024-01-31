@class NSArray, NSString;

@interface GKTTRLogRequestInfo : GKInternalRepresentation

@property (retain, nonatomic) NSArray *playersAndPushTokens;
@property (retain, nonatomic) NSString *radarID;
@property (retain, nonatomic) NSString *requesterAlias;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)initWithPlayersAndPushTokens:(id)a0 radarID:(id)a1 requesterAlias:(id)a2;

@end
