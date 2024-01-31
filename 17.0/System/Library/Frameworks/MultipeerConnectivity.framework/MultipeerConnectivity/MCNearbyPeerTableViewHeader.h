@class UILabel, UIActivityIndicatorView;

@interface MCNearbyPeerTableViewHeader : UIView {
    UIActivityIndicatorView *_spinner;
    UILabel *_text;
}

- (void)dealloc;
- (id)initWithTitle:(id)a0;
- (void)layoutSubviews;

@end
