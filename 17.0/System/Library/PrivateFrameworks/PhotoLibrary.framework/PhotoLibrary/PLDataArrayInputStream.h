@class NSArray, NSMutableData;
@protocol PLDataArrayInputStreamProgressDelegate;

@interface PLDataArrayInputStream : NSInputStream {
    NSArray *_dataArray;
    NSMutableData *_bodyData;
    unsigned long long _dataCount;
    unsigned long long _dataLength;
    unsigned long long _dataOffset;
    unsigned long long _currentIndex;
    unsigned long long _currentOffset;
    unsigned long long _currentLength;
    BOOL _openEventSent;
    unsigned long long _streamStatus;
    id _delegate;
    struct __CFRunLoopSource { } *_rls;
    void /* function */ *_clientCallback;
    struct { long long version; void *info; void /* function */ *retain; void /* function */ *release; void /* function */ *copyDescription; } _clientContext;
}

@property (nonatomic) id<PLDataArrayInputStreamProgressDelegate> progressDelegate;

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
- (void)_updateProgress;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)totalBytes;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)setDelegate:(id)a0;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (unsigned long long)bytesRead;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_scheduleProgressUpdate;
- (id)initWithDataArray:(id)a0;

@end
