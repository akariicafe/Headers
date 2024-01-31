@class NSDictionary, AXAssetsService;

@interface TTSAXResourceMigrationUtilities : NSObject

@property (retain, nonatomic) AXAssetsService *assetsService;
@property (nonatomic) BOOL isMigrationComplete;
@property (retain, nonatomic) NSDictionary *obsoleteVoicesWithReplacements;

+ (id)sharedInstance;

- (id)init;
- (id)updatedIdentifierForLegacyIdentifier:(id)a0 withLanguageCode:(id)a1;
- (id)_readVoiceIdentifiersToMigrateFromPreferences;
- (void)restartMigrationIfNeeded;
- (void)resourceCompletedMigration:(id)a0;
- (id)convertIdentifierIfNeeded:(id)a0;
- (void)downloadCompactResourceIfNeededForIdentifier:(id)a0;
- (void)writeIsMigrationCompleteToPreferences:(id)a0;
- (id)_remapGenderedSiriVoiceIdentifiers:(id)a0;
- (void).cxx_destruct;
- (void)deleteCompactResourceIfNeededForIdentifier:(id)a0;
- (id)legacyIdentifierForUpdatedIdentifierDuringMigration:(id)a0;
- (id)_readIsMigrationCompleteFromPreferences;
- (void)writeVoiceIdentifiersToMigrateToPreferences:(id)a0;
- (BOOL)resourceNeedsMigration:(id)a0;

@end
