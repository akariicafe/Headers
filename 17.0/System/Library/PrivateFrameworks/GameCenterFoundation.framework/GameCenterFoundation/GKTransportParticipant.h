@class NSString;

@interface GKTransportParticipant : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *pseudonym;

+ (id)secureCodedPropertyKeys;
+ (id)participantsFrom:(id)a0 withKey:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPlayerID:(id)a0 pseudonym:(id)a1;
- (id)serverRepresentation;

@end
