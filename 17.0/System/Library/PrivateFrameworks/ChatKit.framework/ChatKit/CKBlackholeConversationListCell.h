@class UILabel, UIDateLabel;

@interface CKBlackholeConversationListCell : UITableViewCell

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureForConversation:(id)a0;

@end
