@class NSArray, NSEnumerator;

@interface _PASLowValueCardinalityMutableDictionaryEnumerator : NSEnumerator {
    NSArray *_objectsAndKeys;
    unsigned long long _i;
    NSEnumerator *_keyEnumerator;
}

- (id)init;
- (id)nextObject;
- (id)allObjects;
- (void).cxx_destruct;

@end
