@class NSString;

@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)triggers;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (Class)entityClassForEnumeration;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id)tableAliases;
+ (id)uniquedColumns;
+ (id)createTableSQL;
+ (id)primaryKeyColumns;
+ (id)joinClausesForProperty:(id)a0;
+ (id)databaseName;
+ (id)privateSubEntities;
+ (BOOL)isTemporary;
+ (id)indices;
+ (id)checkConstraints;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (void)enumerateColumnsWithBlock:(id /* block */)a0;
+ (id)allDatabaseColumnNames;
+ (id)deleteStatementWithProperty:(id)a0 database:(id)a1;
+ (id)disambiguatedDatabaseTable;
+ (Class)entityForProperty:(id)a0;
+ (BOOL)hasColumnWithName:(id)a0;
+ (BOOL)hasROWID;
+ (id)insertSQLForProperties:(id)a0 shouldReplace:(BOOL)a1;
+ (id)updateSQLForProperties:(id)a0 predicate:(id)a1;


@end
