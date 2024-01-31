@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)addOperation:(id)a0;
- (unsigned long long)countOfOperations;
- (id)init;
- (void)dealloc;
- (BOOL)containsOperation:(id)a0;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (id)uniqueOperationForKey:(id)a0;
- (void)removeOperation:(id)a0;

@end
