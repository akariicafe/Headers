@class UIListContentView, NSString, UIActivityIndicatorView, UIListContentConfiguration;

@interface DevicesHeaderView : UITableViewHeaderFooterView <PSHeaderFooterView>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) UIListContentView *listContentView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIListContentConfiguration *listContentConfiguration;

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (void)setupSubviewsWithSpecifier:(id)a0;

@end
