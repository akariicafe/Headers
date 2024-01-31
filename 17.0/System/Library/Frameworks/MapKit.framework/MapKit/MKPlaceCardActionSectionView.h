@class NSLayoutConstraint, MKPlaceCardActionItem, UIView, UIButton;
@protocol MKPlaceCardActionSectionViewDelegate;

@interface MKPlaceCardActionSectionView : MKPlaceSectionRowView {
    BOOL _useMarginLayout;
    BOOL _usingSmallFonts;
    NSLayoutConstraint *_heightAnchor;
    NSLayoutConstraint *_leftButtonYConstraint;
    NSLayoutConstraint *_rightButtonYConstraint;
    NSLayoutConstraint *_platterSizeConstraint;
}

@property (retain, nonatomic) MKPlaceCardActionItem *leftItem;
@property (retain, nonatomic) MKPlaceCardActionItem *rightItem;
@property (nonatomic) BOOL singleItemIsFullWidth;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *accessoryView;
@property (weak, nonatomic) id<MKPlaceCardActionSectionViewDelegate> delegate;

+ (id)_font:(BOOL)a0;
+ (void)_setButtonString:(id)a0 forActionItem:(id)a1 isLeftItem:(BOOL)a2;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (id)currentLeftItem;
- (void)_leftButtonIsPressed:(id)a0;
- (id)_makePlaceActionButtonWithActionItem:(id)a0 isLeftItem:(BOOL)a1 useSmallFonts:(BOOL)a2;
- (void)_rightButtonIsPressed:(id)a0;
- (void)_setUpViewWithButtons;
- (id)glyphFont;
- (void)infoCardThemeChanged;
- (id)initWithLeftActionItem:(id)a0 rightActionItem:(id)a1 useSmallFonts:(BOOL)a2 singleItemIsFullWidth:(BOOL)a3;
- (id)initWithLeftActionItem:(id)a0 rightActionItem:(id)a1 useSmallFonts:(BOOL)a2 singleItemIsFullWidth:(BOOL)a3 useMarginLayout:(BOOL)a4;
- (void)setTopHairlineHidden:(BOOL)a0;

@end
