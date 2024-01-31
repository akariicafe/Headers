@class UIScreen, NSString, CADisplayLink, NSRunLoop;

@interface ICDisplayLink : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL selector;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (weak, nonatomic) NSRunLoop *runLoop;
@property (retain, nonatomic) NSString *runLoopMode;
@property (weak, nonatomic) UIScreen *screen;

- (void)dealloc;
- (void)invalidate;
- (void)schedule;
- (void).cxx_destruct;
- (void)displayLinkAction;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
