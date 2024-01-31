@class NSString, EFSQLColumnSchema;
@protocol EFSQLValueExpressable;

@interface EFSQLValueSource : NSObject {
    NSString *_sourceTableAlias;
}

@property (readonly, nonatomic) EFSQLColumnSchema *sourceColumn;
@property (readonly, nonatomic) NSString *sourceTableName;
@property (readonly, nonatomic) id<EFSQLValueExpressable> bitExpression;
@property (readonly, nonatomic) NSString *columnAlias;

- (void).cxx_destruct;
- (id)initWithColumn:(id)a0;
- (id)initWithColumn:(id)a0 bitExpression:(id)a1;
- (id)initWithColumn:(id)a0 bitExpression:(id)a1 columnAlias:(id)a2;
- (id)initWithColumn:(id)a0 columnAlias:(id)a1;
- (id)initWithColumn:(id)a0 sourceTableAlias:(id)a1 columnAlias:(id)a2;

@end
