@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {
    NSMutableArray *_queue;
    NSMutableArray *_holdQueue;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithGraph:(id)a0;

@end
