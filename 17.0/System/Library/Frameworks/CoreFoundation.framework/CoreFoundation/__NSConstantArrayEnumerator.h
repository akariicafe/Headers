@class NSConstantArray;

@interface __NSConstantArrayEnumerator : NSEnumerator {
    NSConstantArray *_underlyingArray;
    unsigned long long _index;
}

- (id)nextObject;
- (id)allObjects;
- (id)initWithConstantArray:(id)a0;

@end
