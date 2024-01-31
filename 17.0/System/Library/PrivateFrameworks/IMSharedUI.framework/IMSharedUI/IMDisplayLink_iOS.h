@class CADisplayLink;

@interface IMDisplayLink_iOS : IMDisplayLink

@property (retain, nonatomic) CADisplayLink *displayLink;

- (void)invalidate;
- (void)schedule;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;

@end
