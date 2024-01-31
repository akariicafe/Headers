@class NSString, EKUIDividedGridViewTableViewCell;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {
    EKUIDividedGridViewTableViewCell *_tableViewCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplay;
- (void).cxx_destruct;
- (id)tableViewCell;
- (id)allCells;
- (id)cellForRow:(long long)a0;
- (id)cellLabels;
- (void)dividedGridViewController:(id)a0 didSelectCell:(id)a1 atIndex:(long long)a2;
- (void)dividedGridViewControllerDidLayout:(id)a0;
- (BOOL)drawBackgroundForRow:(long long)a0;
- (long long)gridViewType;
- (double)heightForRow:(long long)a0;
- (void)refreshCells;
- (void)selectCell:(id)a0 atIndex:(long long)a1;

@end
