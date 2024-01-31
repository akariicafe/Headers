@class NSArray, NSMutableArray, NFUnfairLock;

@interface FCThreadSafeMutableArray : NSObject {
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}

@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;
@property (readonly, copy, nonatomic) NSArray *readOnlyArray;

- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (void)addObjectsFromArray:(id)a0;
- (void)removeFirstObject;
- (id)firstObjectPassingTest:(id /* block */)a0;
- (void).cxx_destruct;
- (void)readWriteWithAccessor:(id /* block */)a0;
- (void)addObject:(id)a0;

@end
