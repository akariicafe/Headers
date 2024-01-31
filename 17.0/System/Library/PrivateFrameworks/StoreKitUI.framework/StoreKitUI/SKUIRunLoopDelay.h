@class NSString;

@interface SKUIRunLoopDelay : NSObject {
    NSString *_mode;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    double _timeout;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)delayRunLoop;
- (void)endDelay;
- (id)initWithRunLoopMode:(id)a0 timeout:(double)a1;

@end
