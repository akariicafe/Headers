@interface SITracingObjcLifetimeSpan : NSObject {
    struct SITracingSpan { unsigned long long traceid; unsigned long long spanid; unsigned long long parentid; int queryid; char kind; char *what; } _mySpan;
}

- (void)dealloc;
- (id)init:(struct SITracingSpan { unsigned long long x0; unsigned long long x1; unsigned long long x2; int x3; char x4; char *x5; })a0 kind:(char)a1 what:(const char *)a2;

@end
