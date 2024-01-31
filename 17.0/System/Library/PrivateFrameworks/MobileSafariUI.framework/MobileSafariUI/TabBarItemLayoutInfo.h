@class TabBarItem, TabBar, TabBarItemView, UIView;

@interface TabBarItemLayoutInfo : NSObject {
    TabBarItemView *_tabBarItemView;
    TabBarItemView *_tabBarItemPreviewView;
    UIView *_itemSnapshotView;
}

@property (readonly, weak, nonatomic) TabBar *tabBar;
@property (readonly, weak, nonatomic) TabBarItem *tabBarItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) BOOL canClose;
@property (nonatomic, getter=isReordering) BOOL reordering;
@property (nonatomic, getter=isLeadingEdgeVisible) BOOL leadingEdgeVisible;
@property (nonatomic, getter=isTrailingEdgeVisible) BOOL trailingEdgeVisible;
@property (nonatomic, getter=isTrailingActiveItem) BOOL trailingActiveItem;
@property (nonatomic) double titleLayoutWidth;
@property (nonatomic) BOOL hidesTitleText;
@property (nonatomic) double titleAnchorAdditionalOffset;
@property (nonatomic) double contentOffset;
@property (readonly, nonatomic) TabBarItemView *tabBarItemView;
@property (readonly, nonatomic) TabBarItemView *viewForDragPreview;
@property (readonly, nonatomic) TabBarItemView *tabBarItemPreviewView;
@property (readonly, nonatomic) BOOL hasViews;
@property (nonatomic, getter=isVisibleInTabBar) BOOL visibleInTabBar;
@property (nonatomic, getter=isRemovedFromTabBar) BOOL removedFromTabBar;
@property (nonatomic) unsigned long long activeAnimationCount;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_reusableView;
- (void)closeButtonTapped:(id)a0;
- (void)_clearView:(id)a0;
- (void)_clearViews;
- (void)_clearViewsIfNeeded;
- (BOOL)_requiresViews;
- (void)_updateHidesTitleText;
- (long long)_visibleEdge;
- (void)clearPreviewView;
- (id)initWithTabBar:(id)a0 item:(id)a1;
- (void)itemDidUpdateIcon;
- (void)itemDidUpdateIsActive;
- (void)itemDidUpdateIsPinned;
- (void)itemDidUpdateIsPlaceholder;
- (void)itemDidUpdateIsUnread;
- (void)itemDidUpdateMediaState;
- (void)itemDidUpdateShareParticipants;
- (void)itemDidUpdateTitle;
- (void)mediaStateMuteButtonTapped:(id)a0;
- (void)updateTabBarStyle;
- (void)updateTitleTruncation;

@end
