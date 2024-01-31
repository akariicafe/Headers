@class NSData, NSString, NSDate, NSXPCConnection, NSManagedObjectID, NSSet, NSDictionary, PHObjectPlaceholder, PHMomentShare, PHShareRelationshipChangeRequestHelper;

@interface PHMomentShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHMomentShare *_originalMomentShare;
    NSXPCConnection *_clientConnection;
    BOOL _changedAssets;
    NSString *_keySourceAssetIdentifier;
    NSSet *_sourceAssetIdentifiersForBatchedCreation;
    NSSet *_sourceAssetIdentifiersForCurationSet;
    NSDictionary *_sourceAssetCMMAssetMapForCreationRequest;
    NSDictionary *_sourceAssetIdentifiersToAdjustmentBakeInOptionsDictionaryForBatchedCreation;
    NSDictionary *_sourceAssetIdentifiersToMetadataCopyOptionsDictionaryForBatchedCreation;
}

@property (readonly, nonatomic) PHShareRelationshipChangeRequestHelper *participantsHelper;
@property (retain, nonatomic) NSString *originatingScopeIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *previewData;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedMomentShare;
@property (nonatomic) BOOL shouldIgnoreBudgets;
@property (nonatomic) BOOL shouldNotifyOnUploadCompletion;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)changeRequestForMomentShare:(id)a0;
+ (id)creationRequestForMomentShareWithTitle:(id)a0 publicPermission:(short)a1 creationDate:(id)a2 createMomentShareAssetsFromAssets:(id)a3 creationOptionsPerAsset:(id)a4 preview:(id)a5 originatingMomentShare:(id)a6;
+ (void)expungeMomentShares:(id)a0;
+ (void)trashMomentShares:(id)a0;
+ (id)validateMomentShareCreationDate:(id)a0 error:(id *)a1;

- (void)addParticipants:(id)a0;
- (short)mode;
- (void)setPublicPermission:(short)a0;
- (void).cxx_destruct;
- (void)setThumbnailImageData:(id)a0;
- (id)thumbnailImageData;
- (BOOL)_addSourceAssetsToMomentShare:(id)a0 error:(id *)a1;
- (void)_setOriginalMomentShare:(id)a0;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)createMomentShareAssetsFromAssets:(id)a0 withCreationOptionsPerAsset:(id)a1 withPreview:(id)a2;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end
