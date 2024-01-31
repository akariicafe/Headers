@class NSData;

@interface IDSMPFullAccountIdentity : IDSMPIdentity

@property (readonly, nonatomic) NSData *publicName;

+ (id)identityWithData:(id)a0 error:(id *)a1;
+ (id)fullAccountIdentityWithError:(id *)a0;

- (id)dataRepresentationWithError:(id *)a0;
- (id)publicAccountIdentityWithError:(id *)a0;
- (id)rolledAccountIdenityWithError:(id *)a0;
- (id)signData:(id)a0 withError:(id *)a1;

@end
