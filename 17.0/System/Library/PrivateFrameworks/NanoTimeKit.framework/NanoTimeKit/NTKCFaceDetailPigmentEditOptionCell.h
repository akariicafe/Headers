@class NTKPigmentEditOptionArray, NSString, UIImage, NTKFaceEditColorPickerConfiguration;
@protocol NTKCFaceDetailPigmentEditOptionCellDelegate;

@interface NTKCFaceDetailPigmentEditOptionCell : NTKCFaceDetailEditOptionCell <UICollectionViewDelegateFlowLayout, _NTKCFaceDetailPigmentAddCellDelegate> {
    NTKFaceEditColorPickerConfiguration *_configuration;
    NTKPigmentEditOptionArray *_editingModifiedColors;
    NTKPigmentEditOptionArray *_previouslySelectedColors;
    UIImage *_dividerImage;
    UIImage *_plusImage;
    struct CGSize { double width; double height; } _dividerItemSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _dividerSwatchRect;
}

@property (weak, nonatomic) id<NTKCFaceDetailPigmentEditOptionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)_dividerImage;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)selectLastColor;
- (id)_configurationFromCollection:(id)a0 selectedOptions:(id)a1;
- (id)_dequeueCellForIndexPath:(id)a0;
- (long long)_editOptionIndexForIndexPath:(id)a0;
- (id)_imageForIndexPath:(id)a0;
- (id)_indexPathForEditOptionIndex:(long long)a0;
- (BOOL)_isReloadCollectionRequired:(id)a0 selectedOptions:(id)a1;
- (id)_plusImage;
- (void)_setupFromCollection;
- (void)addCellTapped:(id)a0;
- (id)initWithCollection:(id)a0 forFaceView:(id)a1 face:(id)a2;
- (void)modifiedColor:(id)a0;
- (id)optionAtIndex:(unsigned long long)a0;

@end
