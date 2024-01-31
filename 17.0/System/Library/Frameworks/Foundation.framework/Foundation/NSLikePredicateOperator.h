@interface NSLikePredicateOperator : NSMatchingPredicateOperator

- (id)symbol;
- (SEL)selector;
- (BOOL)_shouldEscapeForLike;

@end
