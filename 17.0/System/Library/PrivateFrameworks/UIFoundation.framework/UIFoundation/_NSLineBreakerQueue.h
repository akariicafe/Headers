@interface _NSLineBreakerQueue : NSObject {
    const void **_buf;
    unsigned long long _capacity;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _count;
}

- (id)init;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)count;
- (void)_ensureCapacity:(unsigned long long)a0;
- (id)description;
- (const void *)valueAtIndex:(unsigned long long)a0;
- (void)removeAllValues;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)appendValue:(const void *)a0;
- (void)removeValuesBeforeIndex:(unsigned long long)a0;

@end
