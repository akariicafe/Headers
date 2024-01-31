@interface MFPersistenceDatabaseSchema_iOS : EDPersistenceDatabaseSchema <EDPersistenceDatabaseSchemaProvider>

+ (id)tablesAndForeignKeysToResolve:(id *)a0 associationsToResolve:(id *)a1;
+ (id)additionalSchemaProviders;

@end
