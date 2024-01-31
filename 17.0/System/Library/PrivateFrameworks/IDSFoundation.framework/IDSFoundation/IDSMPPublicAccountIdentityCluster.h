@class IDSMPPublicAccountIdentity;

@interface IDSMPPublicAccountIdentityCluster : IDSMPIdentity

@property (readonly, nonatomic) IDSMPPublicAccountIdentity *publicAccountIdentity;

- (id)dataRepresentationWithError:(id *)a0;
- (BOOL)isParentOfCluster:(id)a0;

@end
