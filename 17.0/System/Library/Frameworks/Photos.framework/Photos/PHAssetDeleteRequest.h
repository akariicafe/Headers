@class PHAssetDeleteOptions;

@interface PHAssetDeleteRequest : PHTrashableObjectDeleteRequest

@property (copy, nonatomic) PHAssetDeleteOptions *deleteOptions;

- (void).cxx_destruct;
- (void)_updateSyndicationStateForSyndicationIdentifier:(id)a0 savedAssetType:(short)a1 sourceLibraryID:(long long)a2;
- (void)deleteManagedObject:(id)a0 photoLibrary:(id)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)validateForDeleteManagedObject:(id)a0 error:(id *)a1;

@end
