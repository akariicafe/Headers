@class SFTabViewContainerView, NSString, UIVisualEffectView, TabGroupSwitcherViewController, SFCapsuleCollectionView;
@protocol SFCapsuleCollectionViewToolbarContentProviding;

@interface TabGroupSwitcherView : UIView <TabContainerView> {
    TabGroupSwitcherViewController *_controller;
    UIVisualEffectView *_statusBarBackdrop;
    TabGroupSwitcherViewController *_tabGroupSwitcher;
    double _tabViewPresentationProgress;
    SFCapsuleCollectionView *_capsuleView;
    SFTabViewContainerView *_containerView;
}

@property (nonatomic) BOOL showsTabGroupSwitcherToolbar;
@property (readonly, nonatomic) id<SFCapsuleCollectionViewToolbarContentProviding> alternateToolbarContentProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateToolbarTheme;

@end
