@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray *_list;
}

- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (void)addObject:(id)a0;

@end
