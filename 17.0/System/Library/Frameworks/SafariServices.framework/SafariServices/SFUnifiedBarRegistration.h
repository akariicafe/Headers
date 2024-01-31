@class _SFBarManager, NSString, NSArray, SFUnifiedBar, NSSet, SFDownloadsUnifiedBarItem, UIButton, SFUnifiedBarButton, NSMutableSet, SFUnifiedBarItem, SFCollaborationUnifiedBarItem, _SWCollaborationButtonView;

@interface SFUnifiedBarRegistration : NSObject <_SFBarRegistrationToken> {
    SFUnifiedBar *_bar;
    _SFBarManager *_barManager;
    long long _persona;
    BOOL _needsUpdateItems;
    BOOL _nextUpdateShouldPinScrollPositionToTrailingEdge;
    NSMutableSet *_disabledBarItems;
    NSMutableSet *_hiddenBarItems;
    NSArray *_leadingBarItems;
    NSArray *_trailingBarItems;
    NSSet *_allBarItems;
    SFUnifiedBarButton *_bookmarksAndSidebarButton;
    SFUnifiedBarItem *_backButton;
    SFUnifiedBarItem *_forwardButton;
    SFUnifiedBarItem *_tabGroupButton;
    SFUnifiedBarItem *_shareButton;
    SFUnifiedBarItem *_newTabButton;
    SFUnifiedBarItem *_tabOverviewButton;
    SFDownloadsUnifiedBarItem *_downloadsButton;
    SFUnifiedBarItem *_cancelButton;
    SFCollaborationUnifiedBarItem *_collaborationButton;
}

@property (nonatomic) long long contentMode;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long pageFormatItemState;
@property (readonly, nonatomic) UIButton *microphoneButton;
@property (retain, nonatomic) _SWCollaborationButtonView *collaborationButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (void)updateBarAnimated:(BOOL)a0;
- (BOOL)_isBarItemHidden:(long long)a0;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (void)setBarItem:(long long)a0 menu:(id)a1;
- (void)setImage:(id)a0 forBarItem:(long long)a1;
- (void).cxx_destruct;
- (void)pulseBarItem:(long long)a0;
- (void)_itemReceivedTap:(id)a0;
- (id)viewForBarItem:(long long)a0;
- (void)setProgress:(double)a0 forBarItem:(long long)a1;
- (BOOL)containsBarItem:(long long)a0;
- (id)popoverSourceInfoForItem:(long long)a0;
- (void)_updateItems;
- (id)initWithBar:(id)a0 barManager:(id)a1 persona:(long long)a2;
- (long long)_SFBarItemForUnifiedBarItem:(id)a0;
- (id)_imageForBarItem:(long long)a0;
- (id)_makeBarItemForSFBarItem:(long long)a0;
- (void)_setNeedsUpdateItems;
- (id)_unifiedBarItemsForSFBarItems:(id)a0;
- (void)_updateEnabledBarItems;
- (void)_updateItemsIfNeeded;
- (void)setAttributedTitle:(id)a0 forBarItem:(long long)a1;
- (void)setTitle:(id)a0 forBarItem:(long long)a1;
- (id)unifiedBarItemForSFBarItem:(long long)a0;

@end
