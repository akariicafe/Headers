@class CADisplayLink;

@interface ISDisplayLink : NSObject

@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) long long preferredFramesPerSecond;

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithUpdateHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_update:(id)a0;
- (void).cxx_destruct;
- (void)_callUpdateHandler;

@end
