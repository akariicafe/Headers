@class NSString, UILabel, NSMutableArray;
@protocol PKExpressBannerLabelViewDelegate;

@interface PKExpressBannerLabelView : UIView {
    unsigned int _alignmentEdge;
    NSString *_text;
    struct CGSize { double width; double height; } _size;
    UILabel *_label;
    NSMutableArray *_obsoleteLabels;
    id<PKExpressBannerLabelViewDelegate> _delegate;
}

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
