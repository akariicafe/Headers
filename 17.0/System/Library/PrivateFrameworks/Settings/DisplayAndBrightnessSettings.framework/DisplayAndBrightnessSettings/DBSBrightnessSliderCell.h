@class UILabel, NSMutableArray, UIView;

@interface DBSBrightnessSliderCell : PSSliderTableCell

@property (retain) NSMutableArray *controlAndWarningLayoutConstraints;
@property (retain) UILabel *referenceWarningLabel;
@property (retain) UIView *warningContainerView;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureLayout;

@end
