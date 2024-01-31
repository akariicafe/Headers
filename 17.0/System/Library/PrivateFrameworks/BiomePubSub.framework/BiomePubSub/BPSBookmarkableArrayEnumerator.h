@class NSArray;

@interface BPSBookmarkableArrayEnumerator : BPSBookmarkableEnumerator {
    NSArray *_array;
    unsigned long long _index;
}

- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextObject;
- (void).cxx_destruct;
- (id)validateBookmark:(id)a0;
- (id)initWithArray:(id)a0;
- (id)bookmark;

@end
