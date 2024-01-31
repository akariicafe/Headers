@class UIActivityIndicatorView;

@interface HUTitleAsyncValueCell : HUTitleValueCell

@property (retain) UIActivityIndicatorView *spinnerView;
@property (nonatomic) BOOL showSpinner;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)createSpinner;

@end
