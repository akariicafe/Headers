@protocol SYDocumentWorkflowsDataStore;

@interface SYDocumentWorkflowsRepository : NSObject {
    id<SYDocumentWorkflowsDataStore> _persistentStore;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchUserActivityWithRelatedUniqueIdentifier:(id)a0 error:(id *)a1;
- (BOOL)saveUserActivity:(id)a0 forRelatedUniqueIdentifier:(id)a1 sourceBundleIdentifier:(id)a2 error:(id *)a3;

@end
