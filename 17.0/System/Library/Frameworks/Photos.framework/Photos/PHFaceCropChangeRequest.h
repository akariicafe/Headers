@class PHObjectPlaceholder, NSString, PHRelationshipChangeRequestHelper, NSData, NSManagedObjectID;

@interface PHFaceCropChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (retain, nonatomic) NSData *resourceData;
@property (copy, nonatomic) NSString *originatingFaceUUID;
@property (copy, nonatomic) NSString *originatingFaceCropUUID;
@property (nonatomic) short type;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *faceHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper;
@property (nonatomic) short state;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceCrop;
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

+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)a0 resourceData:(id)a1 person:(id)a2;
+ (id)_creationRequestForFaceCropWithOriginatingFace:(id)a0 resourceData:(id)a1 personLocalIdentifier:(id)a2;
+ (id)changeRequestForFaceCrop:(id)a0;
+ (id)creationRequestForFaceCropCopyFromFaceCrop:(id)a0 withType:(short)a1 onPerson:(id)a2;
+ (id)creationRequestsForFaceCropsWithOriginatingFace:(id)a0 resourceData:(id)a1;
+ (void)deleteFaceCrops:(id)a0;

- (void).cxx_destruct;
- (void)setFace:(id)a0;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (void)_prepareFaceHelperIfNeeded;
- (void)_preparePersonHelperIfNeeded;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end
