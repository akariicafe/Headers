@class NSString, EFSQLTableSchema, EFSQLColumnExpression;

@interface EFSQLColumnSchema : NSObject {
    EFSQLTableSchema *_table;
}

@property (readonly, nonatomic) unsigned long long collation;
@property (readonly, nonatomic) BOOL isPrimaryKey;
@property (readonly, nonatomic) BOOL isAutoincrementing;
@property (readonly, nonatomic) id defaultValue;
@property (copy, nonatomic) NSString *foreignKeyTargetString;
@property (weak, nonatomic) EFSQLTableSchema *foreignKeyTarget;
@property (nonatomic) unsigned long long foreignKeyDeleteAction;
@property (nonatomic) unsigned long long foreignKeyUpdateAction;
@property (weak, nonatomic) EFSQLTableSchema *associatedTable;
@property (readonly, weak, nonatomic) EFSQLTableSchema *table;
@property (readonly, copy, nonatomic) NSString *definition;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL nullable;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpression;
@property (readonly, nonatomic) EFSQLColumnExpression *columnExpressionWithFullName;

+ (id)integerColumnWithName:(id)a0 nullable:(BOOL)a1;
+ (id)blobColumnWithName:(id)a0 nullable:(BOOL)a1;
+ (id)integerColumnWithName:(id)a0 nullable:(BOOL)a1 defaultValue:(id)a2;
+ (id)textColumnWithName:(id)a0 collation:(unsigned long long)a1 nullable:(BOOL)a2;
+ (unsigned long long)columnTypeForString:(id)a0;
+ (id)realColumnWithName:(id)a0 nullable:(BOOL)a1;
+ (id)realColumnWithName:(id)a0 nullable:(BOOL)a1 defaultValue:(id)a2;
+ (id)stringForColumnType:(unsigned long long)a0;
+ (id)textColumnWithName:(id)a0 collation:(unsigned long long)a1 nullable:(BOOL)a2 defaultValue:(id)a3;

- (id)fullNameWithDatabaseName:(id)a0;
- (id)initRowIDWithAlias:(id)a0 isAutoincrementing:(BOOL)a1;
- (void)setTable:(id)a0;
- (id)_stringForForeignKeyAction:(unsigned long long)a0;
- (void)associateWithTable:(id)a0;
- (id)description;
- (id)initWithName:(id)a0 isPrimaryKey:(BOOL)a1 isAutoincrementing:(BOOL)a2 type:(unsigned long long)a3 collation:(unsigned long long)a4 nullable:(BOOL)a5 defaultValue:(id)a6;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)setAsForeignKeyForTable:(id)a0 onDelete:(unsigned long long)a1 onUpdate:(unsigned long long)a2;
- (void)setAsForeignKeyForString:(id)a0 onDelete:(unsigned long long)a1 onUpdate:(unsigned long long)a2;
- (id)initWithName:(id)a0 type:(unsigned long long)a1 collation:(unsigned long long)a2 nullable:(BOOL)a3 defaultValue:(id)a4;

@end
