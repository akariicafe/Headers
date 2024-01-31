@class _TtC12GameCenterUI18BaseSplitPresenter;

@interface GameCenterUI.JetDashboardViewController : GameCenterUI.BaseSplitCollectionViewController <GKPlayerAvatarViewDelegate> {
    void /* unknown type, empty encoding */ dashboardPresenter;
    void /* unknown type, empty encoding */ launchContext;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ clippingLayer;
    void /* unknown type, empty encoding */ badageablePhotoView;
    void /* unknown type, empty encoding */ landscapeBadageablePhotoView;
    void /* unknown type, empty encoding */ profileBadgeCount;
}

@property (nonatomic, retain) _TtC12GameCenterUI18BaseSplitPresenter *dataPresenter;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _rootController;
@property (nonatomic, retain) void /* unknown type, empty encoding */ _specifier;

- (void)loadMoreWithContinuationToken:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didSelectPlayerAvatarView:(id)a0;
- (void)donePressed:(id)a0;

@end
