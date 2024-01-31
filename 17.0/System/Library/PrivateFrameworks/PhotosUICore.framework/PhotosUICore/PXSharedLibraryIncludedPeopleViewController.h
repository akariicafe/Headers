@class NSString, NSIndexPath, PXSharedLibraryIncludedPeopleDataSourceManager;

@interface PXSharedLibraryIncludedPeopleViewController : UICollectionViewController <PHPickerViewControllerDelegate, PXSectionedDataSourceManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _collectionViewBounds;
}

@property (retain, nonatomic) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager;
@property (retain, nonatomic) NSIndexPath *currentSelectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForWidth:(double)a0 numberOfItems:(unsigned long long)a1;

- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)viewDidLayoutSubviews;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (id)initWithDataSourceManager:(id)a0;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;
- (id)_infoAtIndexPath:(id)a0;
- (id)_personAtIndexPath:(id)a0;
- (void)_removeCell:(id)a0;

@end
