@class NSString;

@interface BSMIGServer : NSObject {
    NSString *_portName;
    unsigned int _port;
    struct _opaque_pthread_t { long long x0; struct __darwin_pthread_handler_rec *x1; char x2[8176]; } *_thread;
    struct mig_subsystem { void /* function */ *x0; int x1; int x2; unsigned int x3; unsigned long long x4; struct routine_descriptor { void /* function */ *x0; void /* function */ *x1; unsigned int x2; unsigned int x3; struct *x4; unsigned int x5; } x5[1]; } *_subsystem;
    struct __CFRunLoopObserver { } *_entryObserver;
    struct __CFRunLoopObserver { } *_exitObserver;
}

@property (nonatomic) int threadPriority;
@property (readonly, copy, nonatomic) NSString *threadName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPortName:(id)a0 subsystem:(struct mig_subsystem { void /* function */ *x0; int x1; int x2; unsigned int x3; unsigned long long x4; struct routine_descriptor { void /* function */ *x0; void /* function */ *x1; unsigned int x2; unsigned int x3; struct *x4; unsigned int x5; } x5[1]; } *)a1 separateThread:(BOOL)a2;

@end
