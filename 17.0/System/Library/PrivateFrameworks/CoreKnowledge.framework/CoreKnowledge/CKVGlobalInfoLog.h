@class KVDictionaryLog;

@interface CKVGlobalInfoLog : NSObject {
    KVDictionaryLog *_log;
}

- (id)schemaVersion;
- (unsigned char)enablementOptions;
- (id)siriLanguageCode;
- (void).cxx_destruct;
- (id)dictationLanguageCodes;
- (id)initWithRootDirectory:(id)a0;
- (id)lastMigration;
- (id)migratedBuildVersion;
- (id)migratedProjectVersion;
- (id)migrationAttempts;
- (BOOL)recordMigrationAttempt;
- (BOOL)recordMigrationWithBuildVersion:(id)a0 projectVersion:(id)a1 enablementOptions:(unsigned char)a2 siriLanguageCode:(id)a3 dictationLanguageCodes:(id)a4;
- (BOOL)updateEnablementOptions:(unsigned char)a0;
- (BOOL)updateSchemaVersion:(id)a0;
- (BOOL)updateSiriLanguageCode:(id)a0 dictationLanguageCodes:(id)a1;

@end
