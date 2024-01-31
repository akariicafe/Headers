@class UIEventFetcher, UIEventEnvironment;

@interface UIEventDispatcher : NSObject <UIEventFetcherSink> {
    UIEventEnvironment *_mainEnvironment;
    UIEventFetcher *_eventFetcher;
    struct __CFRunLoopSource { } *_handleEventQueueRunLoopSource;
    struct __CFRunLoopSource { } *_collectHIDEventsRunLoopSource;
    struct __CFRunLoop { } *_runLoop;
}

- (void)dealloc;
- (void)eventFetcherDidReceiveEvents:(id)a0;
- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;

@end
