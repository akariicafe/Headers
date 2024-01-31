@class GCController, _GCVirtualControllerImpl, NSError;

@interface GCVirtualController : NSObject {
    _GCVirtualControllerImpl *_impl;
    NSError *_error;
}

@property (readonly, nonatomic) GCController *controller;

+ (id)virtualControllerWithConfiguration:(id)a0;

- (void)disconnect;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)connectWithReplyHandler:(id /* block */)a0;
- (void)setPosition:(struct CGPoint { double x0; double x1; })a0 forDirectionPadElement:(id)a1;
- (void)setValue:(double)a0 forButtonElement:(id)a1;
- (void)updateConfigurationForElement:(id)a0 configuration:(id /* block */)a1;

@end
