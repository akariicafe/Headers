@class NSEnumerator;

@interface BLSPeekingEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    id _peekedObject;
}

+ (id)peekingEnumeratorWithEnumerator:(id)a0;

- (id)nextObject;
- (void).cxx_destruct;
- (id)peekNextObject;

@end
