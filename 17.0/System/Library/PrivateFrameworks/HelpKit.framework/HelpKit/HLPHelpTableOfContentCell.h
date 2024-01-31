@class UIImageView, HLPURLSessionItem, UILabel, HLPHelpItem, NSLayoutConstraint;

@interface HLPHelpTableOfContentCell : UITableViewCell {
    NSLayoutConstraint *_arrowImageViewLeadingConstraint;
    NSLayoutConstraint *_sectionImageWidthConstraint;
    NSLayoutConstraint *_sectionImageLeadingConstraint;
    NSLayoutConstraint *_labelLeadingConstraint;
}

@property (nonatomic) BOOL RTL;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *sectionImageView;
@property (retain, nonatomic) HLPURLSessionItem *sectionImageURLSessionItem;
@property (nonatomic, getter=isSearchResult) BOOL searchResult;
@property (nonatomic) BOOL showFirstLevelIcon;
@property (nonatomic) BOOL ignoreLevels;
@property (nonatomic) BOOL closed;
@property (nonatomic) BOOL updateSeparatorInsetAutomatically;
@property (retain, nonatomic) HLPHelpItem *helpItem;
@property (retain, nonatomic) UIImageView *arrowImageView;

- (id)accessibilityLabel;
- (void)dealloc;
- (void)prepareForReuse;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)toggle;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arrowTransform;
- (void)cancelIconRequest;
- (long long)itemLevel;
- (void)updateToggleImageAnimated:(BOOL)a0;

@end
