@class EKCalendarChooserDefaultImpl, NSArray, UIActivityIndicatorView, UILabel, CUIKGroupInfo, EKGroupInfoButton;

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView {
    UIActivityIndicatorView *_spinner;
    NSArray *_primaryLabelWithShowAllButtonLargeConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonLargeConstraints;
    NSArray *_commonLargeConstraints;
    NSArray *_primaryLabelWithShowAllButtonNormalConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonNormalConstraints;
    NSArray *_commonNormalConstraints;
    NSArray *_commonConstraints;
    BOOL _stacked;
}

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) EKGroupInfoButton *showAllButton;
@property (nonatomic) BOOL showAllButtonHidden;
@property (weak, nonatomic) EKCalendarChooserDefaultImpl *chooser;
@property (retain, nonatomic) CUIKGroupInfo *group;

- (void)layoutMarginsDidChange;
- (void)tintColorDidChange;
- (void)_contentSizeCategoryChanged:(id)a0;
- (void)_eventStoreChanged;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_createConstraints;
- (void)_activateConstraints;
- (void)_groupShowAllButtonTapped:(id)a0;
- (void)updateSpinner;

@end
