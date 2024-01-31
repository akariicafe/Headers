@class UIListContentView, NSString, UIActivityIndicatorView;

@interface WFTableViewHeaderView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIListContentView *listContentView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL animating;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_configureContents;

@end
