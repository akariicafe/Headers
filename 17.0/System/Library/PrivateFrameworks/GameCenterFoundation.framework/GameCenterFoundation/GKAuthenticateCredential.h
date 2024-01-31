@class NSString;

@interface GKAuthenticateCredential : GKInternalRepresentation

@property (retain, nonatomic) NSString *authenticationToken;
@property (retain, nonatomic) NSString *accountName;
@property (retain, nonatomic) NSString *playerID;

+ (id)secureCodedPropertyKeys;

- (id)init;
- (void).cxx_destruct;

@end
