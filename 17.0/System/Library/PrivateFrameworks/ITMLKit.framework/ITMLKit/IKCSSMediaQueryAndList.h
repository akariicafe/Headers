@class NSString, IKMutableArray;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {
    IKMutableArray *_queryList;
}

@property (retain, nonatomic) NSString *type;
@property BOOL negated;

- (id)init;
- (unsigned long long)count;
- (id)description;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)addQuery:(id)a0;
- (id)expressionAsString;
- (id)expressionList;
- (id)subQueryAtIndex:(unsigned long long)a0;

@end
