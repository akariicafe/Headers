@class NSString, UILabel, UIView;

@interface SUUIGroupedHeaderView : UIView {
    UILabel *_titleLabel;
    UIView *_topBorder;
    UIView *_botBorder;
}

@property (nonatomic) BOOL hasTopBorder;
@property (nonatomic) BOOL hasBottomBorder;
@property (copy, nonatomic) NSString *title;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
