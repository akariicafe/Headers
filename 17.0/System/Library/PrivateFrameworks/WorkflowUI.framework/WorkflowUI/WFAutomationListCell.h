@class WFAutomationSummaryIconsView, NSString, HFTriggerItem, WFWorkflow, UILabel, WFConfiguredTrigger;
@protocol WFAutomationListCellDelegate;

@interface WFAutomationListCell : UITableViewCell

@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) HFTriggerItem *homeTrigger;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) WFAutomationSummaryIconsView *summaryIconsView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (weak, nonatomic) id<WFAutomationListCellDelegate> delegate;
@property (retain, nonatomic) WFConfiguredTrigger *configuredTrigger;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateUI;
- (void)setConfiguredTrigger:(id)a0 workflow:(id)a1 delegate:(id)a2;
- (void)setTitle:(id)a0 description:(id)a1 triggerIcon:(id)a2 triggerTintColor:(id)a3 triggerCornerRadius:(double)a4 actionIcons:(id)a5;

@end
