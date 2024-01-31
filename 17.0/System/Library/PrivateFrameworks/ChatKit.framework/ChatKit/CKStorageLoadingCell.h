@class UIActivityIndicatorView;

@interface CKStorageLoadingCell : UITableViewCell

@property (retain, nonatomic) UIActivityIndicatorView *spinner;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
