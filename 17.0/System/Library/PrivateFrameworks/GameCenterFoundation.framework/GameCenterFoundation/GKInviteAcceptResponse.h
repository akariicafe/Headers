@class NSDictionary, NSString, NSNumber;

@interface GKInviteAcceptResponse : GKInternalRepresentation

@property (retain, nonatomic) NSDictionary *responsePlist;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *matchID;
@property (retain, nonatomic) NSString *selfPseudonym;
@property (retain, nonatomic) NSNumber *transportVersionToUse;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
