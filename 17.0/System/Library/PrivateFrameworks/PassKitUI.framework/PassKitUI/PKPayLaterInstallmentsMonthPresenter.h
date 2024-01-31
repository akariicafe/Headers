@class NSString, PKCalendarMonthView, NSMutableDictionary;

@interface PKPayLaterInstallmentsMonthPresenter : NSObject <PKDashboardItemPresenter> {
    PKCalendarMonthView *_sampleView;
    NSMutableDictionary *_sizeByItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (Class)itemClass;
- (void)_configureCell:(id)a0 item:(id)a1;
- (void)_configureView:(id)a0 item:(id)a1;
- (id)cellForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (id)collectionViewCellClasses;
- (void)didSelectItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2 navigationController:(id)a3 canPresent:(id /* block */)a4;
- (struct CGSize { double x0; double x1; })sizeForItem:(id)a0 inCollectionView:(id)a1 atIndexPath:(id)a2;
- (void)swapInstallmentsMonthInCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;
- (void)traitCollectionDidChangeFromTrait:(id)a0 toTrait:(id)a1 inCollectionView:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 inCollectionView:(id)a2 atIndexPath:(id)a3;

@end
