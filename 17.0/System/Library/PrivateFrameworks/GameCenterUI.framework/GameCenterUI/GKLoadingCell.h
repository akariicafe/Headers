@class UILabel, UIActivityIndicatorView;

@interface GKLoadingCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *loading;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;

- (void).cxx_destruct;
- (void)awakeFromNib;

@end
