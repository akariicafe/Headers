@class NSData, ASTrafficLogger;

@interface DAConvertCRtoCRLFStream : NSInputStream {
    NSData *_mimeData;
    NSData *_preflightData;
    NSData *_postflightData;
    unsigned long long _totalLength;
    unsigned long long _readOffset;
    BOOL _lastByteCopiedWasCR;
    BOOL _openEventSent;
    unsigned long long _streamStatus;
    BOOL _intendToStream;
    id _delegate;
    struct __CFRunLoopSource { } *_rls;
    void /* function */ *_clientCallback;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } _clientContext;
    ASTrafficLogger *_trafficLogger;
}

- (void)close;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)hasBytesAvailable;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)dealloc;
- (id)delegate;
- (void)open;
- (unsigned long long)streamStatus;
- (id)streamError;
- (id)initWithData:(id)a0;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)setDelegate:(id)a0;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)propertyForKey:(id)a0;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (id)initWithMIMEData:(id)a0 preflightData:(id)a1 postflightData:(id)a2 intendToStream:(BOOL)a3;

@end
