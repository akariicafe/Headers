@class NSString;

@interface FCPersonalizationDataMigrator : NSObject <FCKeyValueStoreMigrating>

@property (readonly, nonatomic) id /* block */ treatmentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyValueStore:(id)a0 migrateObject:(id)a1 forKey:(id)a2 fromVersion:(unsigned long long)a3;
- (BOOL)keyValueStore:(id)a0 canMigrateFromVersion:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)upgradeFromVersion2:(id)a0;
- (id)initWithTreatmentProvider:(id /* block */)a0;

@end
