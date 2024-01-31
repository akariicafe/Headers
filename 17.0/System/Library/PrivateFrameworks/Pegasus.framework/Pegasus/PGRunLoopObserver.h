@interface PGRunLoopObserver : NSObject

@property (nonatomic) struct __CFRunLoopObserver { } *runLoopObserver;
@property (copy, nonatomic) id /* block */ actions;

- (void)dealloc;
- (void).cxx_destruct;

@end
