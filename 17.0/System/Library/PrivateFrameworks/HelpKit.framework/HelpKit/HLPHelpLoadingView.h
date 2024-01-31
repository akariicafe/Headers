@class UILabel, UIImageView, UIActivityIndicatorView;
@protocol HLPHelpLoadingViewDelegate;

@interface HLPHelpLoadingView : UIView {
    UIImageView *_errorImageView;
}

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (weak, nonatomic) id<HLPHelpLoadingViewDelegate> delegate;
@property (nonatomic) BOOL supportsDarkMode;
@property (retain, nonatomic) UILabel *errorTitleLabel;
@property (retain, nonatomic) UILabel *errorMessageLabel;

- (id)init;
- (void)updateBackgroundColor;
- (void).cxx_destruct;
- (void)showActivityIndicator:(BOOL)a0;
- (void)removeErrorView;
- (void)showDefaultErrorMessage;
- (void)showErrorWithTitle:(id)a0 message:(id)a1;
- (void)showHelpBookInfo;
- (void)showNoConnectionErrorMessage;

@end
