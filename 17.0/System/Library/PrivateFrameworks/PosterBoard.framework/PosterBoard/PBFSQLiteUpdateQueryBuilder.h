@class NSString, NSMutableArray, PBFSQLiteWhereClauseBuilder;

@interface PBFSQLiteUpdateQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSMutableArray *_updateColumns;
    PBFSQLiteWhereClauseBuilder *_whereClauseBuilder;
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
- (id)appendUpdateColumnName:(id)a0 toValue:(id)a1;

@end
