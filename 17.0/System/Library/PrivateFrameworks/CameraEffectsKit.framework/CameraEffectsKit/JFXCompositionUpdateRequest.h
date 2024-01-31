@interface JFXCompositionUpdateRequest : JFXCompositionPlayerRequest {
    BOOL _readyForDisplayReceived;
    BOOL _refreshCompletedReceived;
}

@property (readonly, nonatomic) BOOL hasCompleted;

- (id)initWithBlock:(id /* block */)a0;
- (void)didCancel;
- (void)didBegin;
- (void)didComplete;
- (void)didEnqueue;
- (void)setReadyForDisplayReceived;
- (void)setRefreshCompletedReceived;

@end
