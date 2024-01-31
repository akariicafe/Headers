@class UILabel, PXStateBadgeView;

@interface PXHistoryLineView : UIView {
    PXStateBadgeView *_stateBadgeView;
    UILabel *_reasonLabel;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHistoryLine:(id)a0;
- (id)initWithHistoryLine:(id)a0;

@end
