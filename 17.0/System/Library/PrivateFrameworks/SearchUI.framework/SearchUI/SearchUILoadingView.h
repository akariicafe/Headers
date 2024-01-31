@class TLKLabel, UIActivityIndicatorView;

@interface SearchUILoadingView : NUIContainerBoxView

@property (retain) UIActivityIndicatorView *loadingSpinner;
@property (retain) TLKLabel *loadingLabel;
@property (nonatomic) unsigned long long loadingState;

- (id)init;
- (void).cxx_destruct;

@end
