@class NSArray, NSDictionary;

@interface EFSQLSchema : NSObject {
    NSDictionary *_tablesByName;
}

@property (readonly, copy, nonatomic) NSArray *tables;

- (id)indexDefinitionsWithDatabaseName:(id)a0;
- (id)definitionWithDatabaseName:(id)a0;
- (id)description;
- (id)definitionWithDatabaseName:(id)a0 includeIndexes:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithTables:(id)a0;
- (id)tableForName:(id)a0;

@end
