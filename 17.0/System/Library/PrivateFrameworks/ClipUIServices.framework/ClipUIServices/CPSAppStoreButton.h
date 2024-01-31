@class UILabel, UIStackView;

@interface CPSAppStoreButton : CPSButton {
    UIStackView *_fullSizeStack;
    UIStackView *_glyphOnlyStack;
    UILabel *_label;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastLayoutBounds;
    BOOL _intrinsicContentSizeIsValid;
    struct CGSize { double width; double height; } _intrinsicContentSize;
}

- (void)invalidateIntrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;

@end
