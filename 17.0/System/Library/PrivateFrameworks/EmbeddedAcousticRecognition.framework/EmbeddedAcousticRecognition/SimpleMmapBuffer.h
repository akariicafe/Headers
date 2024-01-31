@interface SimpleMmapBuffer : NSObject

@property unsigned long long size;
@property void *dataPointer;

- (void)dealloc;
- (id)initWithData:(const void *)a0 ofSize:(unsigned long long)a1;

@end
