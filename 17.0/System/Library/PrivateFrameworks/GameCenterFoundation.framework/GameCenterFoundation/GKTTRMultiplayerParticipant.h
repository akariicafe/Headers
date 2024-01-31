@class NSString, NSData;

@interface GKTTRMultiplayerParticipant : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSData *pushToken;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlayerID:(id)a0 pushToken:(id)a1;
- (id)serverRepresentation;

@end
