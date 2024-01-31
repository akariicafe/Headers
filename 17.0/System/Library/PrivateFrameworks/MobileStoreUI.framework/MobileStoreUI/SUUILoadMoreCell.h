@class UIActivityIndicatorView;

@interface SUUILoadMoreCell : SUUITableViewCell {
    UIActivityIndicatorView *_indicator;
}

- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
