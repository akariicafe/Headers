@class NSString, NSData, NSSet;

@interface jprL7AuZZkLkFoBK : NSObject

@property (retain, nonatomic) NSString *serverEndpointIdentifier;
@property (retain, nonatomic) NSData *hostChallenge;
@property (retain, nonatomic) NSData *challengeResponse;
@property (retain, nonatomic) NSString *seid;
@property (retain, nonatomic) NSSet *identities;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *callerID;
@property (nonatomic) unsigned long long passwordSetting;
@property (nonatomic) unsigned long long eventFrequency;

- (id)initWithServerEndpointIdentifier:(id)a0;
- (void).cxx_destruct;

@end
