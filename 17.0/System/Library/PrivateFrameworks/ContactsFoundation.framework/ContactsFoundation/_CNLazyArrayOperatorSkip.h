@interface _CNLazyArrayOperatorSkip : _CNLazyArrayOperator {
    unsigned long long _remainingSkipCount;
}

- (id)nextObject;
- (id)initWithInput:(id)a0 limit:(unsigned long long)a1;

@end
