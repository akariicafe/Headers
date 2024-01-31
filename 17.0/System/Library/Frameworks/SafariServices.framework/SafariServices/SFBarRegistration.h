@class _SFBarManager, NSString, NSOrderedSet, UIButton, UIToolbar, NSMutableSet, SFDownloadsBarButtonItem, UIBarButtonItem, _SWCollaborationButtonView;

@interface SFBarRegistration : UIResponder <_SFBarRegistrationToken> {
    NSOrderedSet *_arrangedBarItems;
    UIToolbar *_bar;
    _SFBarManager *_barManager;
    NSMutableSet *_hiddenBarItems;
    NSOrderedSet *_lastCommittedArrangedBarItems;
    long long _layout;
    UIBarButtonItem *_backItem;
    UIBarButtonItem *_bookmarksItem;
    SFDownloadsBarButtonItem *_downloadsItem;
    UIBarButtonItem *_forwardItem;
    UIBarButtonItem *_newTabItem;
    UIBarButtonItem *_shareItem;
    UIBarButtonItem *_tabExposeItem;
    UIBarButtonItem *_openInSafariItem;
    UIBarButtonItem *_customActivityItem;
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

- (id)UIBarButtonItemForItem:(long long)a0;
- (void)pulseDownloadsItem;
- (void)_updateTitlesAndMenus;
- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (long long)_barItemForUIBarButtonItem:(id)a0;
- (void)setCustomActivityImage:(id)a0 accessibilityLabel:(id)a1;
- (void)updateBarAnimated:(BOOL)a0;
- (BOOL)_arrangedBarItemsNeedUpdate;
- (id)_effectiveArrangedBarItems;
- (void)_itemReceivedTouchDown:(id)a0;
- (id)_newBarButtonItemForSFBarItem:(long long)a0;
- (void)setBarItem:(long long)a0 selected:(BOOL)a1;
- (void)_itemReceivedLongPress:(id)a0;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (id)initWithBar:(id)a0 barManager:(id)a1 layout:(long long)a2 persona:(long long)a3;
- (void)updateArrangedUIBarButtonItemsIfNeeded;
- (id)_UIBarButtonItemsForArrangedBarItems:(id)a0;
- (void)setBarItem:(long long)a0 menu:(id)a1;
- (void)setImage:(id)a0 forBarItem:(long long)a1;
- (void)setDownloadsItemProgress:(double)a0;
- (void).cxx_destruct;
- (void)pulseBarItem:(long long)a0;
- (void)_itemReceivedTap:(id)a0;
- (id)_UIBarButtonItemForBarItem:(long long)a0;
- (void)setProgress:(double)a0 forBarItem:(long long)a1;
- (BOOL)containsBarItem:(long long)a0;
- (id)popoverSourceInfoForItem:(long long)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;

@end
