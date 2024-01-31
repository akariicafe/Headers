@class NSString, NSSet, FCCKPrivateDatabaseSchema;
@protocol FCCKDatabaseRecordMiddleware;

@interface FCCKDatabaseEncryptedZoneMigrator : NSObject <FCCKDatabaseMigrator> {
    FCCKPrivateDatabaseSchema *_sourceSchema;
    id<FCCKDatabaseRecordMiddleware> _recordEncryptionMiddleware;
    id /* block */ _deprecatedBlock;
    NSSet *_sourceZoneNames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)databaseMigrationMigrateRecord:(id)a0 database:(id)a1 error:(id *)a2;
- (void)databaseMigrationDidFinishForDatabase:(id)a0 result:(long long)a1;
- (id)databaseMigrationRecordNamesToMigrateInZone:(id)a0 database:(id)a1;
- (void).cxx_destruct;
- (BOOL)databaseMigrationShouldDropRecord:(id)a0 database:(id)a1;
- (id)databaseMigrationZoneNamesForDatabase:(id)a0;
- (BOOL)databaseMigrationShouldMigrateEntireZone:(id)a0 database:(id)a1;

@end
