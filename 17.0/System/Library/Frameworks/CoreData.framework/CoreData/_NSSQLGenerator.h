@class NSSQLiteAdapter, NSSQLiteStatement, NSMutableString;

@interface _NSSQLGenerator : NSObject {
    NSSQLiteStatement *_statement;
    NSSQLiteAdapter *_adapter;
    NSMutableString *_sqlString;
    NSMutableString *_whereClause;
    NSMutableString *_selectList;
}

+ (void)initialize;

- (void)dealloc;

@end
