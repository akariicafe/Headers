@class NSString, NSArray, NSDictionary, NSDate;

@interface POMutableIDTokenJWTBody : POIDTokenJWTBody <POMutableJWTBody>

@property (retain) NSString *aud;
@property (retain) NSArray *audArray;
@property (retain) NSString *azp;
@property (retain) NSString *iss;
@property (retain) NSString *sub;
@property (retain) NSDate *iat;
@property (retain) NSDate *exp;
@property (retain) NSDate *nbf;
@property (retain) NSString *nonce;
@property (retain) NSString *name;
@property (retain) NSString *preferred_username;
@property (retain) NSArray *groups;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGroups:(id)a0;
- (void)setName:(id)a0;
- (void)setSub:(id)a0;
- (void)setNonce:(id)a0;
- (void)setExp:(id)a0;
- (void)setAud:(id)a0;
- (void)setIat:(id)a0;
- (void)setNbf:(id)a0;
- (void)setAzp:(id)a0;
- (void)setIss:(id)a0;
- (void)addCustomClaims:(id)a0;
- (void)setAudArray:(id)a0;
- (void)setPreferred_username:(id)a0;

@end
