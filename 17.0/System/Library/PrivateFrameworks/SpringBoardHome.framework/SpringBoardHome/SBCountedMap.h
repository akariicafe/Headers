@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {
    NSCountedSet *_countedKeys;
    NSMutableDictionary *_map;
}

- (BOOL)containsKey:(id)a0;
- (id)init;
- (BOOL)containsValue:(id)a0;
- (id)checkoutValueForKey:(id)a0 creationBlock:(id /* block */)a1;
- (BOOL)checkinValue:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)checkinValues:(id)a0;

@end
