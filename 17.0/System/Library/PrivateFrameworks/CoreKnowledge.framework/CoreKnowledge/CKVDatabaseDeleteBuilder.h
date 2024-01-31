@class NSArray;

@interface CKVDatabaseDeleteBuilder : CKVDatabaseCommandBuilder {
    NSArray *_returningColumns;
}

- (void)setReturningColumns:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (void)setCommandCriterion:(id)a0;

@end
