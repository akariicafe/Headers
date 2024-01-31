@class NSString, PKInstallmentPlanProgressCollectionViewCell, PKInstallmentPlanTotalFinancedCollectionViewCell;

@interface PKDashboardInstallmentPlanStatusItemPresenter : NSObject <PKDashboardItemPresenter> {
    PKInstallmentPlanProgressCollectionViewCell *_sampleProgressCell;
    PKInstallmentPlanTotalFinancedCollectionViewCell *_sampleTotalFinancedCell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configureProgressCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 forIndexPath:(id)a3;
- (void)_configureTotalFinancedCell:(id)a0 forItem:(id)a1 inCollection:(id)a2 forIndexPath:(id)a3;
- (BOOL)_showStatusForItem:(id)a0;
- (BOOL)canSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
