@class PHCloudSharedAlbum, NSMutableArray, NSString;

@interface PHCloudSharedAlbumChangeRequest : PHChangeRequest {
    BOOL _isPublic;
    BOOL _didSetIsPublic;
}

@property (retain, nonatomic) PHCloudSharedAlbum *cloudSharedAlbum;
@property (retain, nonatomic) NSMutableArray *invitationRecordGUIDsToRemove;
@property (retain, nonatomic) NSMutableArray *invitationsToAdd;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isOwned;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerEmail;
@property (nonatomic) BOOL isPublic;
@property (nonatomic) BOOL cloudPublicURLEnabled;
@property (nonatomic) BOOL cloudPublicURLEnabledLocal;
@property (nonatomic) BOOL cloudMultipleContributorsEnabled;
@property (nonatomic) BOOL cloudMultipleContributorsEnabledLocal;

+ (id)changeRequestForCloudSharedAlbum:(id)a0;
+ (id)creationRequestForCloudSharedAlbumWithTitle:(id)a0;
+ (void)deleteCloudSharedAlbum:(id)a0;

- (id)managedEntityName;
- (void)stopSharing;
- (void).cxx_destruct;
- (void)addInvitationRecordWithFirstName:(id)a0 lastName:(id)a1 fullName:(id)a2 emails:(id)a3 phones:(id)a4;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)placeholderForCreatedCloudSharedAlbum;
- (void)removeCloudSharedAlbumInvitationRecords:(id)a0;

@end
