@interface WebScreenOrientationObserver : NSObject

@property (nonatomic) void *provider;

- (void)dealloc;
- (id)initWithProvider:(void *)a0;
- (void)_screenOrientationDidChange;

@end
