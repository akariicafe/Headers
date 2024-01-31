@class _NSBumpAllocator;

@interface _NSLineBreakerNodePool : NSObject {
    _NSBumpAllocator *_allocator;
    struct _WLNode { struct _WLNode *x0; unsigned long long x1; unsigned long long x2; double x3; BOOL x4; unsigned char x5; unsigned long long x6; struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; double x1; double x2; double x3; double x4; unsigned short x5; double x6; } x7; } *_freeList;
}

- (void)reset;
- (struct _WLNode { struct _WLNode *x0; unsigned long long x1; unsigned long long x2; double x3; BOOL x4; unsigned char x5; unsigned long long x6; struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; double x1; double x2; double x3; double x4; unsigned short x5; double x6; } x7; } *)retainNode:(struct _WLNode { struct _WLNode *x0; unsigned long long x1; unsigned long long x2; double x3; BOOL x4; unsigned char x5; unsigned long long x6; struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; double x1; double x2; double x3; double x4; unsigned short x5; double x6; } x7; } *)a0;
- (void)releaseNode:(struct _WLNode { struct _WLNode *x0; unsigned long long x1; unsigned long long x2; double x3; BOOL x4; unsigned char x5; unsigned long long x6; struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; double x1; double x2; double x3; double x4; unsigned short x5; double x6; } x7; } *)a0;
- (void).cxx_destruct;
- (struct _WLNode { struct _WLNode *x0; unsigned long long x1; unsigned long long x2; double x3; BOOL x4; unsigned char x5; unsigned long long x6; struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; double x1; double x2; double x3; double x4; unsigned short x5; double x6; } x7; } *)allocNode;

@end
