@interface VMUBacktrace : NSObject <NSCopying, NSSecureCoding> {
    int _flavor;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _callstack;
    struct { struct { int pid; unsigned int thread; int run_state; unsigned long long dispatch_queue_serial_num; } context; unsigned long long *frames; unsigned long long *framePtrs; unsigned int length; } _asyncCallstack;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;

- (unsigned int)backtraceLength;
- (void)dealloc;
- (int)threadState;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long *)stackFramePointers;
- (unsigned long long)dispatchQueueSerialNumber;
- (void)setThreadState:(int)a0;
- (id)description;
- (void)fixupStackWithSamplingContext:(struct sampling_context_t { } *)a0 symbolicator:(struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithSamplingContext:(struct sampling_context_t { } *)a0 thread:(unsigned int)a1 recordFramePointers:(BOOL)a2;
- (unsigned int)thread;
- (id)initWithCoder:(id)a0;
- (unsigned long long *)asyncBacktrace;
- (unsigned long long *)backtrace;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)asyncBacktraceLength;
- (struct _CSTypeRef { unsigned long long x0; unsigned long long x1; })_symbolicator;

@end
