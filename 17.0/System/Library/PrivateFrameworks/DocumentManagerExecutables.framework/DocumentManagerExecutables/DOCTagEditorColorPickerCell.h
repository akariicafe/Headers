@class UIGestureRecognizer, DOCHorizontalTagDotPicker;

@interface DOCTagEditorColorPickerCell : UICollectionViewCell

@property (retain, nonatomic) DOCHorizontalTagDotPicker *colorPickerView;
@property (readonly, nonatomic) long long selectedColor;
@property (readonly, nonatomic) UIGestureRecognizer *changeColorPanGestureRecognizer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
