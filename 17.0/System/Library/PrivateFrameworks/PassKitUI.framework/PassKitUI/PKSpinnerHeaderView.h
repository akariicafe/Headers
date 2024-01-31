@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView *_spinner;
}

@property (nonatomic) BOOL showSpinner;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
