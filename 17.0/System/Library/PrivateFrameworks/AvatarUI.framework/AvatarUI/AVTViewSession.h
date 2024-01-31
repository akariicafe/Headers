@class AVTView, AVTViewUpdater, UIView;
@protocol AVTViewSessionDelegate;

@interface AVTViewSession : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) UIView *avtViewContainer;
@property (nonatomic) AVTViewUpdater *avtViewUpdater;
@property (nonatomic) AVTView *avtView;
@property (readonly, copy, nonatomic) id /* block */ becomeActiveHandler;
@property (readonly, copy, nonatomic) id /* block */ tearDownHandler;
@property (weak, nonatomic) id<AVTViewSessionDelegate> delegate;
@property (readonly, nonatomic) struct CGSize { double width; double height; } aspectRatio;

- (void)tearDownWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)activateWithAVTView:(id)a0 container:(id)a1 updater:(id)a2;
- (id)initWithBecomeActiveHandler:(id /* block */)a0 tearDownHandler:(id /* block */)a1 aspectRatio:(struct CGSize { double x0; double x1; })a2;

@end
