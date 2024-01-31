@class UIFont, NSString, PXNavigationListDataSectionManager, UITableViewCell, UIImage, NSMutableDictionary, NSUserActivity, PXNavigationListDataSection, UITableView, NSDate, NSMutableSet;
@protocol PXMemoryAssetsActionFactory;

@interface PXNavigationListController : UIViewController <UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDropDelegate, PXAssetCollectionActionPerformerDelegate, PXNavigationListDataSectionManagerObserver> {
    PXNavigationListDataSection *_dataSection;
    UIFont *_textLabelFont;
    UIFont *_detailTextLabelFont;
    NSMutableDictionary *_rowHeightCache;
    double _layoutWidth;
    double _currentContentHeight;
    UITableViewCell *_measuringCell;
    UIImage *_measuringImage;
    NSDate *_firstPreloadCacheStartTime;
    NSMutableSet *_queuedCacheKeys;
    NSMutableDictionary *_cachedSymbolAttributedStrings;
}

@property (retain, nonatomic) NSUserActivity *siriActionActivity;
@property (readonly, nonatomic) UITableView *tableView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (readonly, nonatomic) PXNavigationListDataSectionManager *dataSectionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<PXMemoryAssetsActionFactory> memoryAssetsActionFactory;

+ (id)_rowHeightCachingQueue;
+ (id)navigateToListItem:(id)a0 sourceViewController:(id)a1 existingAssetsFetchResult:(id)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
+ (id)viewControllerLog;

- (BOOL)actionPerformer:(id)a0 presentViewController:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)undoManagerForActionPerformer:(id)a0;
- (void)_preferredContentSizeChanged:(id)a0;
- (void)loadView;
- (BOOL)actionPerformer:(id)a0 dismissViewController:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)tableView:(id)a0 canHandleDropSession:(id)a1;
- (id)tableView:(id)a0 dropSessionDidUpdate:(id)a1 withDestinationIndexPath:(id)a2;
- (void)tableView:(id)a0 performDropWithCoordinator:(id)a1;
- (id)_textLabelFont;
- (void)_resetFonts;
- (id)_assetCollectionAtIndexPath:(id)a0;
- (void)_configureCell:(id)a0 forListItem:(id)a1 textColor:(id)a2;
- (double)_contentHeightForCellWithWidth:(double)a0 listItem:(id)a1;
- (double)_contentHeightForWidth:(double)a0 dataSection:(id)a1;
- (id)_detailTextLabelFont;
- (void)_finishedAllPreloadTasks;
- (double)_insetWidth;
- (id)_navigateTolistItem:(id)a0 animated:(BOOL)a1;
- (void)_preloadRowHeightCache;
- (void)_preloadRowHeightsForAllValidItems;
- (void)_reportContentHeightDidChangeIfNecessary;
- (void)_resetCachedHeight;
- (void)_resetCachedMeasuringCell;
- (BOOL)_skipPreloadTaskIfNecessary;
- (void)_tableView:(id)a0 updateCellSeparatorStyle:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_updateDataSection;
- (void)contentHeightDidChange;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithDataSectionManager:(id)a0;
- (id)secondaryAttributedTextForGlyphName:(id)a0;

@end
