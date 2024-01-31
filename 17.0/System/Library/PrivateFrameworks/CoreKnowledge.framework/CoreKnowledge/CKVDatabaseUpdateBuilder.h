@class NSArray, NSMutableArray;

@interface CKVDatabaseUpdateBuilder : CKVDatabaseCommandBuilder {
    NSMutableArray *_columnNames;
    NSMutableArray *_columnValues;
    NSArray *_returningColumns;
}

- (void)setValue:(id)a0 forColumn:(id)a1;
- (void)setReturningColumns:(id)a0;
- (id)initWithTableName:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (void)setCommandCriterion:(id)a0;

@end
