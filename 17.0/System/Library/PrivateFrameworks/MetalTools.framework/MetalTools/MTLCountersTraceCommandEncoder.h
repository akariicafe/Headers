@interface MTLCountersTraceCommandEncoder : NSObject {
    unsigned long long _timer;
    struct BinaryBuffer { void /* function */ **x0; struct StreamBuffer { char *x0; char *x1; char *x2; } x1; struct mach_timebase_info { unsigned int x0; unsigned int x1; } x2; } *_stream;
}

@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } segment;

- (void)pushDebugGroup:(id)a0;
- (void)setLabel:(id)a0;
- (void)popDebugGroup;
- (void)endEncoding;
- (void)insertDebugSignpost:(id)a0;
- (id)init:(struct BinaryBuffer { void /* function */ **x0; struct StreamBuffer { char *x0; char *x1; char *x2; } x1; struct mach_timebase_info { unsigned int x0; unsigned int x1; } x2; } *)a0 flags:(unsigned long long)a1;

@end
