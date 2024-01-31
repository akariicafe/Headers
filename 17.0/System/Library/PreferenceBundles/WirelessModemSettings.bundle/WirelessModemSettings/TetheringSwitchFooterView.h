@class NSMutableArray;

@interface TetheringSwitchFooterView : UIView <PSHeaderFooterView> {
    NSMutableArray *_labels;
}

- (id)initWithSpecifier:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 inTableView:(id)a1 shouldSetSize:(BOOL)a2;

@end
