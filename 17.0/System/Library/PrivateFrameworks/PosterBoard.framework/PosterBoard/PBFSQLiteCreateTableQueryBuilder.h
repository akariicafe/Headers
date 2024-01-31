@class NSString, NSMutableArray;

@interface PBFSQLiteCreateTableQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSMutableArray *_columns;
}

@property (nonatomic) BOOL isTypeCheckingStrict;
@property (nonatomic) BOOL createIfNotExists;
@property (nonatomic) BOOL isTemporary;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableName:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appendColumnNamed:(id)a0 type:(unsigned long long)a1;
- (id)appendColumnNamed:(id)a0 type:(unsigned long long)a1 constraints:(unsigned long long)a2;

@end
