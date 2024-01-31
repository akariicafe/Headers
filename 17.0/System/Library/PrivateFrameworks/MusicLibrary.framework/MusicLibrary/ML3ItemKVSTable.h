@class NSArray;

@interface ML3ItemKVSTable : ML3DatabaseTable {
    NSArray *_columns;
}

- (id)columns;
- (void).cxx_destruct;
- (id)name;

@end
