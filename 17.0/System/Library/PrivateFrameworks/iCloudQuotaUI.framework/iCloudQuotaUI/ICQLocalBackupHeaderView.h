@class UIActivityIndicatorView;

@interface ICQLocalBackupHeaderView : ICQSubtitleHeaderView {
    UIActivityIndicatorView *_spinner;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)hideSpinner;
- (void)showSpinner;

@end
