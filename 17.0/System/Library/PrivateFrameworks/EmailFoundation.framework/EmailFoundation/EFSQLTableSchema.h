@class NSHashTable, NSString, NSArray, NSSet, EFSQLColumnSchema, NSMutableArray, NSMutableDictionary;

@interface EFSQLTableSchema : NSObject {
    NSMutableArray *_columns;
    NSMutableDictionary *_columnsByName;
    NSMutableArray *_uniquenessConstraints;
    NSMutableArray *_checkConstraints;
    NSHashTable *_foreignKeyReferences;
    NSHashTable *_associatedColumns;
    NSMutableArray *_indexes;
}

@property (readonly, copy, nonatomic) NSString *rowIDColumnName;
@property (readonly, nonatomic) unsigned long long primaryKeyConflictResolution;
@property (readonly, nonatomic) EFSQLColumnSchema *rowIDColumn;
@property (readonly, copy, nonatomic) NSArray *primaryKeyColumns;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *columns;
@property (readonly, copy, nonatomic) NSArray *uniqueColumns;
@property (readonly, copy, nonatomic) NSArray *checkConstraints;
@property (readonly, copy, nonatomic) NSSet *foreignKeyReferences;
@property (readonly, copy, nonatomic) NSSet *associatedColumns;
@property (readonly, copy, nonatomic) NSArray *indexes;

- (id)columnForName:(id)a0;
- (id)fullNameWithDatabaseName:(id)a0;
- (void)addUniquenessConstraintForColumns:(id)a0 conflictResolution:(unsigned long long)a1;
- (id)indexDefinitionsWithDatabaseName:(id)a0;
- (id)initWithName:(id)a0 rowIDType:(unsigned long long)a1 columns:(id)a2;
- (id)initWithName:(id)a0 rowIDType:(unsigned long long)a1 rowIDAlias:(id)a2 columns:(id)a3;
- (void)addIndexForColumns:(id)a0;
- (void)addIndex:(id)a0;
- (void)addCheckConstraintForExpression:(id)a0;
- (id)definitionWithDatabaseName:(id)a0;
- (id)description;
- (id)definitionWithDatabaseName:(id)a0 includeIndexes:(BOOL)a1;
- (void).cxx_destruct;
- (id)_columnsForColumnNames:(id)a0;
- (void)addColumn:(id)a0;
- (void)removeColumn:(id)a0;
- (void)addForeignKeyReference:(id)a0;
- (id)initWithName:(id)a0 rowIDType:(unsigned long long)a1 rowIDAlias:(id)a2 columns:(id)a3 primaryKeyColumns:(id)a4 conflictResolution:(unsigned long long)a5;
- (void)addAssociatedColumn:(id)a0;
- (id)initWithName:(id)a0 columns:(id)a1 primaryKeyColumns:(id)a2;
- (id)initWithName:(id)a0 columns:(id)a1 primaryKeyColumns:(id)a2 conflictResolution:(unsigned long long)a3;

@end
