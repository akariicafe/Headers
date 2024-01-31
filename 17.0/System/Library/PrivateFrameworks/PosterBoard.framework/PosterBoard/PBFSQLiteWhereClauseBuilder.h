@class NSMutableString, NSMutableArray;

@interface PBFSQLiteWhereClauseBuilder : NSObject {
    NSMutableString *_components;
    NSMutableArray *_componentStack;
}

- (id)init;
- (id)build;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appendColumn:(id)a0 comparison:(unsigned long long)a1 toValue:(id)a2 combinator:(unsigned long long)a3;
- (id)appendEqualsDictionary:(id)a0;
- (id)appendExpression:(id /* block */)a0 combinator:(unsigned long long)a1;
- (id)currentComponent;

@end
