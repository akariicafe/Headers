@interface VUIActivityIndicatorView : UIActivityIndicatorView

+ (id)vui_activityIndicatorViewWithActivityIndicatorStyle:(unsigned long long)a0;

- (void)vui_startTimer:(double)a0;
- (void)vui_startAnimating;
- (void)vui_stopAnimating;

@end
