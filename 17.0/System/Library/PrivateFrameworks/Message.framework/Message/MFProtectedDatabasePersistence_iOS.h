@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence

+ (id)protectedDatabaseName;
+ (id)journalDatabaseName;

- (BOOL)protectedDataAvailable;
- (void)finishJournalReconciliation:(unsigned long long)a0;
- (void)addAdditionalCriteriaToCleanupActivity:(id)a0;
- (BOOL)supportsJournaling;

@end
