@class NSLayoutConstraint;

@interface WFBuddyNetworkListCell : WFNetworkListCell

@property (weak, nonatomic) NSLayoutConstraint *trailingImageViewConstraint;
@property (weak, nonatomic) NSLayoutConstraint *topLabelConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomLabelConstraint;

- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end
