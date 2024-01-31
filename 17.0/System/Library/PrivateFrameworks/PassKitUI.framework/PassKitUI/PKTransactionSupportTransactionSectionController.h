@class PKDashboardPaymentTransactionItemPresenter, UICollectionView, PKDashboardPaymentTransactionItem;

@interface PKTransactionSupportTransactionSectionController : PKPaymentSetupListSectionController {
    PKDashboardPaymentTransactionItem *_transactionItem;
    PKDashboardPaymentTransactionItemPresenter *_transactionItemPresenter;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)_decorateCell:(id)a0 forRowItem:(id)a1 atIndexPath:(id)a2;
- (id)initWithTransactionItem:(id)a0 transactionItemPresenter:(id)a1 collectionView:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (BOOL)shouldHighlightItem:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
