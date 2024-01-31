@class NSString, NSManagedObjectID;

@interface PHObjectDeleteRequest : PHChangeRequest <PHDeleteChangeRequest> {
    NSString *_uuid;
}

@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_deleteRequestsForObjects:(id)a0;
+ (id)deleteRequestForObject:(id)a0;
+ (id)deleteRequestsForObjects:(id)a0 ofType:(Class)a1 forSelector:(SEL)a2;

- (id)init;
- (id)uuid;
- (void).cxx_destruct;
- (void)deleteManagedObject:(id)a0 photoLibrary:(id)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithUUID:(id)a0 request:(id)a1 objectID:(id)a2;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)validateForDeleteManagedObject:(id)a0 error:(id *)a1;

@end
