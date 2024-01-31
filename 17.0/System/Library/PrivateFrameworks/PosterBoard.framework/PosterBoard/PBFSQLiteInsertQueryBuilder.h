@class NSString, NSMutableDictionary;

@interface PBFSQLiteInsertQueryBuilder : NSObject <PBFSQLiteQueryBuilder> {
    NSMutableDictionary *_insertDictionary;
}

@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTableName:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appendInsertIntoColumnNamed:(id)a0 value:(id)a1;

@end
