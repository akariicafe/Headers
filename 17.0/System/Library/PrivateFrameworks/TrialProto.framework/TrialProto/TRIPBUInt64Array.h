@class TRIPBMessage;

@interface TRIPBUInt64Array : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    unsigned long long *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayWithValueArray:(id)a0;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)array;
+ (id)arrayWithValue:(unsigned long long)a0;

- (void)removeAll;
- (id)init;
- (unsigned long long)hash;
- (void)addValue:(unsigned long long)a0;
- (void)dealloc;
- (void)addValues:(const unsigned long long *)a0 count:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (id)initWithValues:(const unsigned long long *)a0 count:(unsigned long long)a1;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(unsigned long long)a1;
- (id)description;
- (unsigned long long)valueAtIndex:(unsigned long long)a0;
- (void)insertValue:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)initWithValueArray:(id)a0;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)addValuesFromArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
