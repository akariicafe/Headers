@class NSMutableArray;

@interface OITSUAggregateEnumerator : NSEnumerator {
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithObjects:(id)a0;
- (id)nextObject;
- (void)addObject:(id)a0;
- (id)initWithFirstObject:(id)a0 argumentList:(char *)a1;

@end
