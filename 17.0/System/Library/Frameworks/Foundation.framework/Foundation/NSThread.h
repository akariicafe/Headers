@class NSArray, NSMutableDictionary, NSString;

@interface NSThread : NSObject {
    id _private;
    unsigned char _bytes[44];
}

@property (class, readonly) NSThread *currentThread;
@property (class, readonly, copy) NSArray *callStackReturnAddresses;
@property (class, readonly, copy) NSArray *callStackSymbols;
@property (class, readonly) BOOL isMainThread;
@property (class, readonly) NSThread *mainThread;

@property (readonly, retain) NSMutableDictionary *threadDictionary;
@property double threadPriority;
@property long long qualityOfService;
@property (copy) NSString *name;
@property unsigned long long stackSize;
@property (readonly) BOOL isMainThread;
@property (readonly, getter=isExecuting) BOOL executing;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly, getter=isCancelled) BOOL cancelled;

+ (double)threadPriority;
+ (void)exit;
+ (void)sleepUntilDate:(id)a0;
+ (BOOL)isDying;
+ (BOOL)isMultiThreaded;
+ (void)detachNewThreadSelector:(SEL)a0 toTarget:(id)a1 withObject:(id)a2;
+ (void)detachNewThreadWithBlock:(id /* block */)a0;
+ (BOOL)setThreadPriority:(double)a0;
+ (void)sleepForTimeInterval:(double)a0;

- (id)initWithBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;
- (void)main;
- (void)start;
- (id)runLoop;
- (BOOL)startAndReturnError:(id *)a0;
- (id)description;
- (void)cancel;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (BOOL)isDying;
- (struct pthread_override_s { } *)_beginQoSOverride:(unsigned int)a0 relativePriority:(int)a1;
- (void)_endQoSOverride:(struct pthread_override_s { } *)a0;
- (void)_nq:(id)a0;
- (BOOL)_setThreadPriority:(double)a0;

@end
