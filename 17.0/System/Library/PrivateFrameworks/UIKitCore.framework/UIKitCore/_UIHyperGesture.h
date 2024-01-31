@class _UIHyperInteractor;
@protocol _UIHyperGestureDelegate;

@interface _UIHyperGesture : NSObject

@property (retain, nonatomic, setter=_setInteractor:) _UIHyperInteractor *_interactor;
@property (weak, nonatomic, setter=_setDelegate:) id<_UIHyperGestureDelegate> _delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_handleGesture:(id)a0;
- (void)_getCurrentTranslation:(double *)a0;
- (void)_getCurrentVelocity:(double *)a0;
- (id)initWithInteractor:(id)a0;

@end
