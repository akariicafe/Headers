@class NSString, EFSQLColumnSchema;

@interface EFSQLTableRelationship : NSObject

@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn;
@property (readonly, nonatomic) EFSQLColumnSchema *destinationColumn;
@property (readonly) BOOL useLeftOuterJoin;
@property (readonly, nonatomic) NSString *tableAlias;
@property (readonly) BOOL isProtectedTable;

- (void).cxx_destruct;
- (id)initWithSourceColumn:(id)a0 destinationColumn:(id)a1 useLeftOuterJoin:(BOOL)a2;
- (id)initWithSourceColumn:(id)a0 destinationColumn:(id)a1 useLeftOuterJoin:(BOOL)a2 tableAlias:(id)a3 isProtectedTable:(BOOL)a4;

@end
