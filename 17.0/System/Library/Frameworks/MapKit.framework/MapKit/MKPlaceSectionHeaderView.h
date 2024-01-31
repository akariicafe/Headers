@class UIFont, _MKRightImageButton, NSArray, MKVibrantLabel, NSString, UIImage, NSLayoutConstraint;

@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView {
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_baselineToBaselineConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    BOOL _contentChanged;
    double _width;
}

@property (retain, nonatomic) MKVibrantLabel *sectionHeaderLabel;
@property (retain, nonatomic) _MKRightImageButton *seeMoreButton;
@property (retain, nonatomic) NSArray *seeMoreButtonConstraints;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *seeMoreButtonText;
@property (retain, nonatomic) UIFont *seeMoreButtonFont;
@property (retain, nonatomic) NSString *providerName;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize { double width; double height; } iconDisplaySize;
@property (nonatomic) BOOL showSeeMoreButton;
@property (nonatomic) BOOL seeMoreButtonAlwaysOnNewLine;

- (void)_updateConstraints;
- (void)updateContent;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (void)createConstraints;
- (void)setTarget:(id)a0 action:(SEL)a1;
- (BOOL)shouldStack;

@end
