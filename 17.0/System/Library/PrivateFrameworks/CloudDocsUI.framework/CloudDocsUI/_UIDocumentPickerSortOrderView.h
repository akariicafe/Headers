@class UIButton, UISegmentedControl, NSArray;
@protocol _UIDocumentPickerViewServiceViewController;

@interface _UIDocumentPickerSortOrderView : UIControl

@property (retain, nonatomic) UISegmentedControl *sortOrder;
@property (retain, nonatomic) UIButton *listModeToggle;
@property (copy, nonatomic) NSArray *leftAlignedConstraints;
@property (copy, nonatomic) NSArray *centeredConstraints;
@property (nonatomic) id<_UIDocumentPickerViewServiceViewController> serviceViewController;
@property (nonatomic) int value;
@property (nonatomic) long long listMode;
@property (nonatomic) BOOL listModeToggleHidden;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)valueChanged:(id)a0;
- (void)_toggleListMode:(id)a0;
- (void)updateForListMode;

@end
