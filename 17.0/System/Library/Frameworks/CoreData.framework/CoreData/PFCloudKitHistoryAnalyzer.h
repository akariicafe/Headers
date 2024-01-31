@class NSManagedObjectContext, NSPersistentHistoryToken;

@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer {
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentHistoryToken *_lastProcessedToken;
}

+ (BOOL)isPrivateTransaction:(id)a0;
+ (BOOL)isPrivateTransactionAuthor:(id)a0;
+ (BOOL)isPrivateContextName:(id)a0;

- (void)dealloc;
- (id)initWithOptions:(id)a0 managedObjectContext:(id)a1;
- (id)instantiateNewAnalyzerContextForChangesInStore:(id)a0;
- (BOOL)processTransaction:(id)a0 withContext:(id)a1 error:(id *)a2;

@end
