@protocol PRInvalidatable;

@interface PRRenderingSession : NSObject

@property (readonly, nonatomic) id<PRInvalidatable> assertion;
@property (readonly, nonatomic) double timeRemaining;

- (void).cxx_destruct;
- (id)initWithReason:(id)a0 invalidationBlock:(id /* block */)a1;

@end
