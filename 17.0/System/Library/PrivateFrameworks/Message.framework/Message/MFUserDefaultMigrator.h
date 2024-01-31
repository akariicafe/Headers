@interface MFUserDefaultMigrator : NSObject

+ (id)log;
+ (id)_keysToMigrateToSharedAppGroup;
+ (void)_migrateExtPropertiesPlist;
+ (id)currentDeviceIdentifer;
+ (void)migrateDefaults:(id)a0;
+ (void)migrateDefaultsFromOldKeysToNewKeys:(id)a0;
+ (BOOL)migratePreferencesToSharedAppGroup;
+ (void)migratePropertyForOldKey:(id)a0 newKey:(id)a1;
+ (id)mobileMailDefaultForKey:(id)a0;
+ (id)oldKeysToNewKeysMap;
+ (void)removeMobileMailDefaultForKey:(id)a0;

@end
