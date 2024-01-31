@class NSURL, NSPersistentContainer, NSString;

@interface SYDocumentWorkflowsCoreDataStore : NSObject <SYDocumentWorkflowsDataStore>

@property (readonly, nonatomic) NSURL *modelURL;
@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_fetchRecordWithRelatedUniqueIdentifier:(id)a0 context:(id)a1 error:(id *)a2;
- (BOOL)_saveContext:(id)a0 error:(id *)a1;
- (id)fetchUserActivityWithRelatedUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)saveUserActivity:(id)a0 forRelatedUniqueIdentifier:(id)a1 sourceBundleIdentifier:(id)a2 error:(id *)a3;

@end
