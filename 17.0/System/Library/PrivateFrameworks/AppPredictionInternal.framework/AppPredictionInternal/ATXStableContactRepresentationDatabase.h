@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (BOOL)migrate;
- (id)init;
- (long long)latestVersion;
- (id)cnContactId:(id)a0;
- (id)deleteAllData;
- (id)stableContactIdentifier:(id)a0;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (BOOL)_runMigrationSteps:(id)a0;

@end
