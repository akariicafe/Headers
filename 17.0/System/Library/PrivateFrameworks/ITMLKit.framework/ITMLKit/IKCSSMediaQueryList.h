@interface IKCSSMediaQueryList : NSObject

- (unsigned long long)count;
- (BOOL)evaluate;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)a0;

@end
