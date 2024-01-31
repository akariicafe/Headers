@class NSMapTable;

@interface REKeyValueMap : NSObject {
    NSMapTable *_keyMap;
    NSMapTable *_valueMap;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)removeKey:(id)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (unsigned long long)valueCount;
- (void)addKey:(id)a0 withValue:(id)a1;
- (id)keyForValue:(id)a0;

@end
