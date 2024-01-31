@class EFSQLTableSchema, NSDictionary, NSArray;

@interface EFSQLObjectPropertyMapper : NSObject

@property (readonly, nonatomic) EFSQLTableSchema *mainTable;
@property (readonly, nonatomic) NSDictionary *keyPathMappers;
@property (readonly, nonatomic) NSDictionary *tableRelationships;
@property (readonly, nonatomic) NSArray *additionalColumns;

- (void).cxx_destruct;
- (id)initWithTable:(id)a0 keyPathMappers:(id)a1 tableRelationships:(id)a2 additionalColumns:(id)a3;

@end
