@class NSMutableDictionary;

@interface LSApplicationIdentityMigrationResult : NSObject {
    NSMutableDictionary *_migratedIdentities;
}

- (id)init;
- (void).cxx_destruct;
- (id)bestMigratedIdentityForIdentity:(id)a0;
- (id)migratedIdentitiesForIdentity:(id)a0;

@end
