@class PKSegmentedBarView, PKRewardsSummaryChartBarConfiguration;

@interface PKRewardsSummaryBarViewWrapper : UIView {
    PKSegmentedBarView *_barView;
    PKRewardsSummaryChartBarConfiguration *_configuration;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithBarView:(id)a0 configuration:(id)a1;

@end
