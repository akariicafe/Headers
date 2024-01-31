@protocol RTTUIReplyActionCellDelegate;

@interface RTTUIReplyActionCell : UITableViewCell

@property (weak, nonatomic) id<RTTUIReplyActionCellDelegate> delegate;

- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (double)adjustedHeight;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 andDelegate:(id)a2;

@end
