@interface ISRootMigrator : ISMigrator

@property (nonatomic) BOOL isErase;
@property (nonatomic) BOOL isRestoreFromBackup;

- (BOOL)performMigration;
- (id)performMigrationForPreferences:(id)a0;
- (id)appendRegionalVariantsToLanguageIdentifiers:(id)a0 regionCode:(id)a1;
- (id)importPreferredLanguagesForPreferences:(id)a0;
- (id)importPreferredLanguages_macOS_10_9_forPreferences:(id)a0;
- (id)performMigrationForUserPreferences:(id)a0 systemPreferences:(id)a1;
- (void)updateAppleLanguagesSchemaVersionToCurrent;

@end
