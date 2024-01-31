@class NSString, SUUIPillsControl, SUUIMenuViewController, SUUIMenuPageComponent, SUUIPopupMenuHeaderView, UIPopoverController, UIBarButtonItem, NSMutableIndexSet;

@interface SUUIMenuPageSection : SUUIStorePageSection <SUUIMenuViewControllerDelegate, SUUIPopupMenuDelegate, SUUISortDataRequestDelegate, UIPopoverControllerDelegate> {
    UIBarButtonItem *_cancelMenuItem;
    SUUIPillsControl *_pillsControl;
    SUUIMenuViewController *_moreListMenuViewController;
    UIPopoverController *_moreListPopoverController;
    SUUIPopupMenuHeaderView *_popupHeaderView;
    long long _selectedIndex;
    NSMutableIndexSet *_sortRequestIndexSet;
}

@property (readonly, nonatomic) SUUIMenuPageComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })sectionContentInset;
- (long long)numberOfCells;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)_cancelMenuAction:(id)a0;
- (id)_contentChildView;
- (void)_dismissMenuViewController;
- (void)_loadSortDataIfNecessaryForMenuIndex:(long long)a0 reason:(long long)a1;
- (id)_newMenuViewController;
- (void)_pillAction:(id)a0;
- (id)_pillsControl;
- (id)_popupHeaderView;
- (void)_restorePreviousSelection;
- (void)_setSelectedIndex:(long long)a0;
- (void)_showMenuViewController;
- (void)_showMoreList;
- (void)_showPopoverController;
- (id)backgroundColorForIndexPath:(id)a0;
- (id)cellForIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForIndexPath:(id)a0;
- (id)initWithPageComponent:(id)a0;
- (void)menuViewController:(id)a0 didSelectItemAtIndex:(long long)a1;
- (void)popupMenuHeader:(id)a0 didSelectMenuItemAtIndex:(long long)a1;
- (void)sortDataRequest:(id)a0 didFinishWithLockups:(id)a1;
- (void)willAppearInContext:(id)a0;

@end
