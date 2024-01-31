@class REUpNextBaseCell;

@interface TableCell : UITableViewCell

@property (retain, nonatomic) REUpNextBaseCell *contentCell;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)configureWithContent:(id)a0;

@end
