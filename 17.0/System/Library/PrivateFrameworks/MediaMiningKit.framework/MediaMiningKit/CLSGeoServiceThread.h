@interface CLSGeoServiceThread : NSThread {
    struct __CFRunLoop { } *_runLoop;
}

- (void)main;
- (void)cancel;

@end
