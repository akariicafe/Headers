@class CRKASMCredentialStore;
@protocol CRKASMRoster;

@interface CRKASMCredentialHousekeeper : NSObject

@property (readonly, nonatomic) id<CRKASMRoster> roster;
@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;

- (void).cxx_destruct;
- (id)initWithRoster:(id)a0 credentialStore:(id)a1;
- (id)entriesInManifest:(id)a0 forPersistentIDs:(id)a1;
- (void)housekeep;
- (void)housekeepTrustedUserCertificates;
- (void)housekeepUserIdentities;
- (BOOL)isEntryValid:(id)a0 allowedUserIdentifiers:(id)a1;
- (id)knownTrustedUserIdentifiers;
- (id)knownUserIdentifiers;
- (void)removeAllUserIdentitiesInManifest:(id)a0;
- (void)removeTrustedUserCertificates:(id)a0 manifest:(id)a1;
- (void)removeUserIdentities:(id)a0 manifest:(id)a1;

@end
