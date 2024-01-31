@class UILabel, UIActivityIndicatorView;

@interface LoadingLabel : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
}

- (id)init;
- (void)sizeToFit;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)text;
- (void)setText:(id)a0 showingActivity:(BOOL)a1;

@end
