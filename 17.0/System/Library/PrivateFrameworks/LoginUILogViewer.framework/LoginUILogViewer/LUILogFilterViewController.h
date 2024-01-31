@class NSString, LUILogFilterView;
@protocol LUILogFilterViewControllerDelegate;

@interface LUILogFilterViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITableViewDelegate, UITableViewDataSource, LUILogFilterCurrentPredicateTableViewCellDelegate, UITextFieldDelegate>

@property (retain, nonatomic) LUILogFilterView *filterView;
@property (weak, nonatomic) id<LUILogFilterViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)_setupButtons;
- (void)viewDidLoad;
- (void)loadView;
- (void)keyboardWillShow:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)keyboardWillHide:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)viewDidDisappear:(BOOL)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_setupCollectionView;
- (void)_setupTableView;
- (void)addButtonTapped:(id)a0;
- (void)_clearCellsSelection;
- (void)_clearPredicateInput;
- (void)_shakeInputView:(id)a0;
- (void)_updatePredicateText;
- (void)applyButtonTapped:(id)a0;
- (id)predicateComparisonCandidates;
- (void)predicateDataUpdated;
- (id)predicateKeyCandidates;
- (void)predicateTableViewCellDeleteButtonTapped:(id)a0;
- (id)predicateValueCandidates;
- (id)predicateValueCandidatesSize;
- (id)sizeArrayWithStrings:(id)a0;

@end
