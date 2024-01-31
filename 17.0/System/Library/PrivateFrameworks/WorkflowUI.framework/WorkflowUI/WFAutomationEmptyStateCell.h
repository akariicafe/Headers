@class WFAutomationTypeExplanationPlatterView, NSArray;

@interface WFAutomationEmptyStateCell : UITableViewCell

@property (readonly, nonatomic) WFAutomationTypeExplanationPlatterView *automationTypeView;
@property (retain, nonatomic) NSArray *currentConstraints;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureForAutomationType:(unsigned long long)a0 buttonTarget:(id)a1 action:(SEL)a2;
- (void)updateLayoutConstraints;

@end
