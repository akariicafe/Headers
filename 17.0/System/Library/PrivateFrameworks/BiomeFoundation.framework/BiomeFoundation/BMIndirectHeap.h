@interface BMIndirectHeap : NSObject

@property unsigned long long *array;
@property unsigned long long count;
@property unsigned long long size;
@property (copy) id /* block */ isAscending;

+ (id)new;

- (id)init;
- (void)reset;
- (void)dealloc;
- (unsigned long long)top;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)pop;
- (void)add:(unsigned long long)a0;
- (id)initWithHeapSize:(unsigned long long)a0 isAscending:(id /* block */)a1;

@end
