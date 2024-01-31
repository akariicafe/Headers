@class NSConstantDictionary;

@interface __NSConstantDictionaryEnumerator : NSEnumerator {
    NSConstantDictionary *_underlyingDictionary;
    unsigned long long _currentIndex;
    BOOL _isForKeys;
}

- (id)nextObject;
- (id)initWithConstantDictionary:(id)a0 enumerateKeys:(BOOL)a1;

@end
