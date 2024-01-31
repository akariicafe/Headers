@class UILabel;

@interface _UIRecentsAccessoryDefaultView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subheadLabel;

- (id)init;
- (void)willMoveToWindow:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_updateLabelTextColors;

@end
