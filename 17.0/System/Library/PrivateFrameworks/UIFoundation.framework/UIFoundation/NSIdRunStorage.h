@interface NSIdRunStorage : NSRunStorage

+ (void)initialize;

- (void)dealloc;
- (void)_allocData:(unsigned long long)a0;
- (void)_reallocData:(unsigned long long)a0;

@end
