@class NSString;

@interface PBFSQLiteDropTableQueryBuilder : NSObject <PBFSQLiteQueryBuilder>

@property (nonatomic) BOOL dropIfNotExists;
@property (readonly, copy, nonatomic) NSString *tableName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
