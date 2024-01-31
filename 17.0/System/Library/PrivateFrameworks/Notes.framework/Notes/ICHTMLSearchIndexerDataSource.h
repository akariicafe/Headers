@interface ICHTMLSearchIndexerDataSource : ICBaseSearchIndexerDataSource

- (id)newManagedObjectContext;
- (id)allIndexableObjectIDsInReversedReindexingOrderWithContext:(id)a0;
- (BOOL)isFolderWithServerShareChanged:(id)a0;
- (id)addNotesFromSubtree:(id)a0;
- (id)persistentStoreCoordinator;
- (id)indexableObjectIDsMatchingPredicate:(id)a0 sortByReversedReindexingOrder:(BOOL)a1 context:(id)a2;
- (unsigned long long)indexingPriority;
- (void)contextWillSave:(id)a0;
- (id)dataSourceIdentifier;

@end
