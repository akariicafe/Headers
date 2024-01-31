@class NSString, PXRoundProgressView, UIImageView, UILabel, UIVisualEffectView, NSArray;

@interface PXActivityProgressViewController : UIViewController {
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    PXRoundProgressView *_progressView;
    UIImageView *_checkmarkView;
    UIVisualEffectView *_separatorView;
    NSArray *_labelConstraints;
    NSArray *_contentConstraints;
}

@property (retain, nonatomic) NSString *primaryText;
@property (retain, nonatomic) NSString *secondaryText;
@property (nonatomic) BOOL showCheckmarkOnCompletion;
@property (nonatomic) double fractionCompleted;

- (void)updateViewConstraints;
- (void)reset;
- (id)_progressView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)_secondaryLabel;
- (id)_primaryLabel;
- (id)_checkmarkView;
- (void)_updatePrimaryLabel;
- (void)_updateSecondaryLabel;
- (void)_updateViewVisibility;

@end
