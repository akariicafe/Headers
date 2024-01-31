@interface MurmurHash3 : NSObject

+ (struct { unsigned long long x0; unsigned long long x1; })hash128WithKey:(const void *)a0 length:(unsigned long long)a1 seed:(unsigned int)a2;

@end
