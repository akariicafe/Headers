@class TRIPBMessage;

@interface TRIPBDoubleArray : NSObject <NSCopying> {
    TRIPBMessage *_autocreator;
    double *_values;
    unsigned long long _capacity;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)arrayWithValueArray:(id)a0;
+ (id)arrayWithCapacity:(unsigned long long)a0;
+ (id)array;
+ (id)arrayWithValue:(double)a0;

- (void)removeAll;
- (id)init;
- (unsigned long long)hash;
- (void)addValue:(double)a0;
- (void)dealloc;
- (void)addValues:(const double *)a0 count:(unsigned long long)a1;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)internalResizeToCapacity:(unsigned long long)a0;
- (void)exchangeValueAtIndex:(unsigned long long)a0 withValueAtIndex:(unsigned long long)a1;
- (void)enumerateValuesWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)removeValueAtIndex:(unsigned long long)a0;
- (id)initWithValues:(const double *)a0 count:(unsigned long long)a1;
- (void)replaceValueAtIndex:(unsigned long long)a0 withValue:(double)a1;
- (id)description;
- (double)valueAtIndex:(unsigned long long)a0;
- (void)insertValue:(double)a0 atIndex:(unsigned long long)a1;
- (id)initWithValueArray:(id)a0;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)addValuesFromArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
