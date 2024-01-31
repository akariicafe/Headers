@interface BPSBookmarkableEnumerator : NSEnumerator

- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextObject;
- (id)bpsPublisher;
- (id)validateBookmark:(id)a0;
- (id)bookmark;

@end
