@class NSString, NSDictionary, ML3DatabaseStatement, ML3DatabaseConnection;

@interface ML3DatabaseResult : NSObject {
    ML3DatabaseStatement *_statement;
    ML3DatabaseConnection *_connection;
    NSDictionary *_columnNameIndexMap;
    unsigned long long _limitIndex;
}

@property (copy, nonatomic) NSString *limitProperty;
@property (nonatomic) long long limitValue;

- (id)rows;
- (void)setLimitProperty:(id)a0 limitValue:(long long)a1;
- (id)stringValueForFirstRowAndColumn;
- (id)init;
- (long long)int64ValueForFirstRowAndColumn;
- (id)initWithStatement:(id)a0 connection:(id)a1;
- (unsigned long long)indexForColumnName:(id)a0;
- (BOOL)hasAtLeastOneRow;
- (id)columnNameIndexMap;
- (id)objectsInColumn:(unsigned long long)a0;
- (id)objectForFirstRowAndColumn;
- (void).cxx_destruct;
- (void)enumerateRowsWithBlock:(id /* block */)a0;
- (id)_statement;

@end
