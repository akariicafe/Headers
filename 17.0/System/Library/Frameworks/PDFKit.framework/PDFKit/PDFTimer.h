@class PDFTimerPrivate;

@interface PDFTimer : NSObject {
    PDFTimerPrivate *_private;
}

- (void)dealloc;
- (void)update;
- (void).cxx_destruct;
- (void)cancel;
- (void)_execute;
- (id)initWithSelector:(SEL)a0 forTarget:(id)a1;
- (id)initWithThrottleDelay:(double)a0 forSelector:(SEL)a1 forTarget:(id)a2;
- (BOOL)isUpdateQueued;

@end
