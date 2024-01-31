@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {
    SUButtonAccessoryView *_accessoryView;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)reloadData;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)loadView;
- (id)_accessoryView;
- (id)_headerItem;
- (void)_reloadHeaderView;
- (BOOL)_canWriteReview;
- (void)_writeAReview:(id)a0;
- (id)newTermsAndConditionsFooter;
- (void)reloadForChangedRowCount:(long long)a0;

@end
