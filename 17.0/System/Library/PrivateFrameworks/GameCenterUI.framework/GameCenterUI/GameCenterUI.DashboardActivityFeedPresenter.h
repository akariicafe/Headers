@class NSString, NSIndexPath;

@interface GameCenterUI.DashboardActivityFeedPresenter : GameCenterUI.BasePresenter {
    void /* unknown type, empty encoding */ scrollToIndexPath;
    void /* unknown type, empty encoding */ scrollToActivityInfo;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ requiredData;
    void /* unknown type, empty encoding */ dashboardDisplayMode;
    void /* unknown type, empty encoding */ pageMetricsPresenter;
    void /* unknown type, empty encoding */ requiredDataPresenter;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property (nonatomic) void /* unknown type, empty encoding */ didScrollToIndexPath;

- (void).cxx_destruct;
- (void)updateSnapshot;
- (id)initWithPlayerId:(id)a0;
- (void)loadMoreActivityFeedWithContinuationToken:(id)a0;

@end
