@protocol WPRangingDelegate;

@interface WPRanging : WPClient

@property (weak, nonatomic) id<WPRangingDelegate> delegate;

- (void)stateDidChange:(long long)a0;
- (void)isRangingEnabledReply:(id /* block */)a0;
- (void)enableRanging:(BOOL)a0;
- (void)enableRanging:(BOOL)a0 reply:(id /* block */)a1;
- (void)rangingEnabled:(BOOL)a0 withError:(id)a1;
- (void)invalidate;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)clientAsString;

@end
