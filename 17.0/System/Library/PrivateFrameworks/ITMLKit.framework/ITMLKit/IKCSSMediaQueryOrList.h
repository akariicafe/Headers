@class IKMutableArray;

@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)addSubQueryList:(id)a0;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;
- (id)subQueryList;

@end
