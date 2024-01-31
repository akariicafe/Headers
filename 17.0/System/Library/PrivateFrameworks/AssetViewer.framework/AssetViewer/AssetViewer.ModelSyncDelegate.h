@interface AssetViewer.ModelSyncDelegate : NSObject <AVPlaybackCoordinatorPlaybackControlDelegate> {
    void /* unknown type, empty encoding */ animationController;
}

- (id)init;
- (void).cxx_destruct;
- (void)playbackCoordinator:(id)a0 didIssueBufferingCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackCoordinator:(id)a0 didIssuePauseCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackCoordinator:(id)a0 didIssuePlayCommand:(id)a1 completionHandler:(id /* block */)a2;
- (void)playbackCoordinator:(id)a0 didIssueSeekCommand:(id)a1 completionHandler:(id /* block */)a2;

@end
