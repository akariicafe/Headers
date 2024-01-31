@class NSString, NSMutableArray, PBFSQLiteWhereClauseBuilder;

@interface PBFSQLiteSelectQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSMutableArray *_columnsToSelect;
    NSMutableArray *_orderByColumns;
    PBFSQLiteWhereClauseBuilder *_whereClauseBuilder;
    BOOL _selectAllColumns;
}

@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableName:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)setWhereClause:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appendOrderBy:(id)a0 comparison:(long long)a1;
- (id)selectAllColumns;
- (id)selectColumnNamed:(id)a0;
- (id)selectColumnNamed:(id)a0 as:(id)a1;

@end
