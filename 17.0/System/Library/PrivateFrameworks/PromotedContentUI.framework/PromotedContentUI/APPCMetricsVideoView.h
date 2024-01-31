@interface APPCMetricsVideoView : APPCMetricsView {
    void /* unknown type, empty encoding */ representationFetched;
    void /* unknown type, empty encoding */ videoView;
    void /* unknown type, empty encoding */ videoIsFullscreen;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ privacyMarker;

- (void)didMoveToSuperview;
- (void)didAddSubview:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)beginAction;
- (void)onDidEnterFullscreen:(id)a0;
- (void)onDidLeaveFullscreen:(id)a0;

@end
