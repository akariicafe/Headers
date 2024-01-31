@interface _NSBumpAllocator : NSObject {
    struct Slab { unsigned long long x0; struct Slab *x1; char x2[1]; } *_firstSlab;
    struct Slab { unsigned long long x0; struct Slab *x1; char x2[1]; } *_curSlab;
    char *_ptr;
    char *_endPtr;
}

- (void)reset;
- (void)dealloc;
- (void *)allocate:(unsigned long long)a0;
- (struct Slab { unsigned long long x0; struct Slab *x1; char x2[1]; } *)_allocateSlabWithSize:(unsigned long long)a0;

@end
