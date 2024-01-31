@class NSString, EFSQLColumnSchema;

@interface EDPersistenceAssociationPlaceholder : NSObject

@property (readonly, nonatomic) EFSQLColumnSchema *column;
@property (readonly, copy, nonatomic) NSString *tableName;

- (BOOL)resolveWithSchema:(id)a0;
- (id)initWithColumn:(id)a0 tableName:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
