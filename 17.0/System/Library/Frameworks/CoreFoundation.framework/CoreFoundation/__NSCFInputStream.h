@interface __NSCFInputStream : NSInputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)close;
- (id)retain;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (id)initWithURL:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)hash;
- (id)initWithFileAtPath:(id)a0;
- (id)delegate;
- (unsigned long long)retainCount;
- (void)open;
- (unsigned long long)streamStatus;
- (id)streamError;
- (BOOL)_tryRetain;
- (id)initWithData:(id)a0;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)_isDeallocating;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (BOOL)isEqual:(id)a0;
- (void)setDelegate:(id)a0;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (oneway void)release;
- (id)propertyForKey:(id)a0;

@end
