@class NSArray, CKVSQLCommandOrder, CKVSQLCommandJoin, NSNumber;

@interface CKVDatabaseSelectBuilder : CKVDatabaseCommandBuilder {
    CKVSQLCommandJoin *_join;
    CKVSQLCommandOrder *_order;
    NSArray *_columns;
    BOOL _count;
    NSNumber *_limit;
    NSNumber *_offset;
}

- (void)setLimit:(id)a0;
- (void)setCount:(BOOL)a0;
- (void)setOffset:(id)a0;
- (id)initWithTableName:(id)a0;
- (id)build;
- (void)setColumns:(id)a0 withTablePrefixes:(id)a1;
- (void).cxx_destruct;
- (void)setColumns:(id)a0;
- (void)setCommandOrder:(id)a0;
- (void)setCommandCriterion:(id)a0;
- (void)setJoinWithTable:(id)a0 joinCriterion:(id)a1;

@end
