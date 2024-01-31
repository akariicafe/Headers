@class NSDictionary, NSEnumerator;

@interface UIKBTreeLocalizedKeylistEnumerator : NSEnumerator {
    NSDictionary *_keyplaneCache;
    NSEnumerator *_nameEnum;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithKeyplaneCache:(id)a0;

@end
