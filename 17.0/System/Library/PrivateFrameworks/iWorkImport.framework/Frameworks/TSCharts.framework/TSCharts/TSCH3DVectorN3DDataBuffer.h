@interface TSCH3DVectorN3DDataBuffer : TSCH3DDataBuffer {
    struct DataBuffer3DDimension { struct tvec3<int> { union { int x; int r; int s; } ; union { int y; int g; int t; } ; union { int z; int b; int p; } ; } _size; unsigned long long _components; } _dimension;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *__value_; } __end_cap_; } _container;
}

@property (readonly, nonatomic) void *container;

+ (id)bufferWithCapacity3DDimension:(const void *)a0;

- (unsigned long long)components;
- (struct tvec3<int> { union { int x0; int x1; int x2; } x0; union { int x0; int x1; int x2; } x1; union { int x0; int x1; int x2; } x2; })size;
- (unsigned long long)count;
- (id).cxx_construct;
- (const void *)data;
- (void).cxx_destruct;
- (int)componentType;
- (unsigned long long)componentByteSize;
- (void)fillCapacity;
- (id)initWithCapacity3DDimension:(const void *)a0;

@end
