@class NSIndexSet;

@interface _NSIndexSetEnumerator : NSEnumerator {
    NSIndexSet *_indexSet;
    unsigned long long _index;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithIndexSet:(id)a0;

@end
