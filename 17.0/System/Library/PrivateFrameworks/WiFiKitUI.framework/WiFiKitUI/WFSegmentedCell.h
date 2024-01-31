@class UISegmentedControl;

@interface WFSegmentedCell : UITableViewCell

@property (weak, nonatomic) UISegmentedControl *segmentedControl;
@property (copy) id /* block */ handler;

- (void)addSubview:(id)a0;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)_segmentedControlDidChange:(id)a0;

@end
