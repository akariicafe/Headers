@protocol SiriDirectActionSourceDelegate;

@interface SiriDirectActionSource : SiriActivationSource

@property (weak, nonatomic) id<SiriDirectActionSourceDelegate> delegate;

- (id)init;
- (void)configureConnection;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)activateWithContext:(id)a0;
- (void)activateWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)canActivateChangedTo:(id)a0;

@end
