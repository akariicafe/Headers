@class NSNotificationCenter;

@interface __NSObserver : NSObject {
    NSNotificationCenter *nc;
}

@property unsigned long long token;
@property (copy) id /* block */ block;

- (void)dealloc;

@end
