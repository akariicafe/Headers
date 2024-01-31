@interface NSMessagePort : NSPort {
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;

- (id)retain;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)init;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)retainCount;
- (BOOL)setName:(id)a0;
- (void)invalidate;
- (BOOL)_tryRetain;
- (id)initWithName:(id)a0;
- (BOOL)isValid;
- (BOOL)_isDeallocating;
- (id)name;
- (void)setDelegate:(id)a0;
- (oneway void)release;
- (id)initWithRemoteName:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;

@end
