@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface JFXThreadSafeArray : NSObject

@property (retain, nonatomic) NSMutableArray *array;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;

- (id)init;
- (unsigned long long)indexOfObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)sortUsingSelector:(SEL)a0;
- (void)removeAllObjects;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)containsObject:(id)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeObjectsInArray:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;
- (id)sortedArrayUsingComparator:(id /* block */)a0;
- (void)moveObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)copyOfArray;

@end
