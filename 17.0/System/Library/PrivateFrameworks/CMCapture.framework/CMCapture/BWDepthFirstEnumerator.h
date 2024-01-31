@class NSMutableArray;

@interface BWDepthFirstEnumerator : BWNodeEnumerator {
    int _ordering;
    NSMutableArray *_stack;
    unsigned long long _currentSourceIndex;
}

- (void)dealloc;
- (id)nextObject;
- (id)initWithGraph:(id)a0 vertexOrdering:(int)a1;

@end
