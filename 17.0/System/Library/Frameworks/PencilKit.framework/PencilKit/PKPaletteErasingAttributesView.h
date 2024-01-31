@class NSArray, UISegmentedControl, _PKInkThicknessPicker;

@interface PKPaletteErasingAttributesView : UIView

@property (nonatomic) long long eraserType;
@property (nonatomic) BOOL hideWeightPicker;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) _PKInkThicknessPicker *thicknessPicker;
@property (retain, nonatomic) NSArray *hiddenThicknessPickerConstraints;
@property (retain, nonatomic) NSArray *visibleThicknessPickerConstraints;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_updateThicknessPickerToolConfiguration;

@end
