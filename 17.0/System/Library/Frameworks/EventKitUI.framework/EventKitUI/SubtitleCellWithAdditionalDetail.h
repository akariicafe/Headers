@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUITableViewCell {
    UILabel *_additionalDetailLabel;
}

@property (readonly, retain, nonatomic) UILabel *additionalDetailLabel;
@property id source;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)leftFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overlapsRightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 difference:(double *)a2;

@end
