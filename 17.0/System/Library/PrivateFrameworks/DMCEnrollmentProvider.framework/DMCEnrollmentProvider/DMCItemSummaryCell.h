@class NSArray;

@interface DMCItemSummaryCell : UITableViewCell

@property (retain, nonatomic) NSArray *detailViews;
@property (nonatomic) double detailLabelOriginX;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)createViewWithDescriptors:(id)a0;
- (void)createViewWithItemDetailArray:(id)a0;

@end
