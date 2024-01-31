@class NSMutableArray;

@interface BWReverseBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithGraph:(id)a0;

@end
