@class UILabel, NSString, UIActivityIndicatorView;

@interface PSSoftwareUpdateTableView : UITableView

@property (retain, nonatomic) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (retain, nonatomic) UILabel *checkingStatusLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) int state;
@property (retain, nonatomic) NSString *currentVersion;
@property BOOL updatesDeferred;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)preferredContentSizeChanged:(id)a0;

@end
