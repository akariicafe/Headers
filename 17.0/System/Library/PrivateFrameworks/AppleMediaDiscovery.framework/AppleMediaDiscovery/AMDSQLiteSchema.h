@class NSString, NSDictionary, NSNumber;

@interface AMDSQLiteSchema : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *schemaDict;
@property (retain, nonatomic) NSDictionary *streamToTableMap;
@property (retain, nonatomic) NSDictionary *tables;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSNumber *versionNumber;

+ (id)fetchColumnSpecsForTable:(id)a0;

- (id)getVersion;
- (id)getTables;
- (id)getInsertStatementFor:(id)a0 hasColumns:(id)a1 requiresColumns:(id *)a2;
- (id)getName;
- (id)getSchemaForTable:(id)a0;
- (id)getCreateTableStatementFor:(id)a0;
- (void).cxx_destruct;
- (id)getVersionNumber;
- (id)getTableForStream:(id)a0;
- (id)initWithDict:(id)a0 error:(id *)a1;
- (id)getSchemaDict;
- (id)getStreamToTableMap;

@end
