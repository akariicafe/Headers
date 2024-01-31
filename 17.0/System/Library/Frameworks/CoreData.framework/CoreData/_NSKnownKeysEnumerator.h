@interface _NSKnownKeysEnumerator : NSEnumerator {
    id _target;
    const id *_list;
    const id *_referenceItems;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    unsigned long long _index;
    unsigned long long _flags;
}

- (void)dealloc;
- (id)nextObject;

@end
