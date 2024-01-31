@interface WFInsetTableViewController : UITableViewController {
    BOOL _sectionContentInsetInitialized;
}

@property (nonatomic) BOOL reloadDataOnUpdateSectionContentInset;

- (id)init;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (BOOL)_isRegularWidth;
- (void)_updateSectionContentInsetWithAnimation:(BOOL)a0;

@end
