@class CRKASMCredentialStore, NSString;
@protocol CRKIdentity;

@interface CRKASMIdentityPicker : NSObject

@property (readonly, nonatomic) CRKASMCredentialStore *credentialStore;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) id<CRKIdentity> identity;

- (id)manifest;
- (void).cxx_destruct;
- (id)arrayBySortingPersistentIDs:(id)a0;
- (id)candidatePersistentIDsInManifest:(id)a0;
- (id)initWithCredentialStore:(id)a0 userIdentifier:(id)a1;
- (BOOL)isManifestEntryValid:(id)a0 manifest:(id)a1;
- (id)pickIdentityFromCandidates:(id)a0 manifest:(id)a1;
- (id)pickIdentityFromOrderedCandidates:(id)a0 manifest:(id)a1;

@end
