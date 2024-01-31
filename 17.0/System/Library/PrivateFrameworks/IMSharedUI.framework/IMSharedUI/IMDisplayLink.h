@class NSString, UIScreen, NSRunLoop;

@interface IMDisplayLink : NSObject

@property (nonatomic) long long preferredFramesPerSecond;
@property (weak, nonatomic) NSRunLoop *runLoop;
@property (retain, nonatomic) NSString *runLoopMode;
@property (weak, nonatomic) UIScreen *screen;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;
+ (Class)_displayLinkClass;

- (void)dealloc;
- (void)invalidate;
- (void)schedule;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)_displayLinkCallback;

@end
