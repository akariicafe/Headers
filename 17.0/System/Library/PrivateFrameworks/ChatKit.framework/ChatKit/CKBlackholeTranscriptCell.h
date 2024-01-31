@class UILabel, UIDateLabel;

@interface CKBlackholeTranscriptCell : UITableViewCell

@property (retain, nonatomic) UILabel *fromLabel;
@property (retain, nonatomic) UIDateLabel *dateLabel;
@property (retain, nonatomic) UILabel *bodyLabel;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configureForMessageItem:(id)a0 showSender:(BOOL)a1;

@end
