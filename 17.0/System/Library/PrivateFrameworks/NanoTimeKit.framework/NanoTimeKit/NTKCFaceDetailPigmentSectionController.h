@class NSString, UIViewController, NTKFaceColorPalette;
@protocol NTKCFaceDetailEditOptionModifiedDelegate;

@interface NTKCFaceDetailPigmentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailPigmentColorSliderCellDelegate, NTKCFaceDetailPigmentEditOptionCellDelegate> {
    NTKFaceColorPalette *_palette;
    BOOL _suppressActionRowUpdates;
}

@property (weak, nonatomic) id<NTKCFaceDetailEditOptionModifiedDelegate> delegate;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hasSectionForFace:(id)a0 forEditMode:(long long)a1;

- (void).cxx_destruct;
- (void)_customizeActionRow:(id)a0 withEditOption:(id)a1;
- (BOOL)_handleDidSelectOption:(id)a0;
- (BOOL)_hasActionRow;
- (void)_presentPigmentPickerForSlot:(id)a0;
- (Class)actionRowCellClass;
- (Class)editCellClass;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 editOptionCollection:(id)a3 faceView:(id)a4;
- (id)optionAtIndex:(unsigned long long)a0;
- (void)pigmentColorSliderCell:(id)a0 colorFractionChanged:(double)a1 transiently:(BOOL)a2 canceled:(BOOL)a3;
- (void)pigmentEditOptionCellDidSelectAddOption:(id)a0;

@end
