@class NSDictionary, NSArray, UIImageView, NSMutableDictionary, UILabel, UIImage, NSString;
@protocol CPSActionButtonLayoutDelegate;

@interface CPSActionButton : CPSButton

@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) UIImageView *buttonImageView;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) NSMutableDictionary *tintColors;
@property (weak, nonatomic) id<CPSActionButtonLayoutDelegate> layoutDelegate;
@property (retain, nonatomic) UIImage *buttonImage;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL disabledButtonFocused;
@property (retain, nonatomic) NSDictionary *buttonAttributes;

- (void)_updateLayout;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (void)stateUpdated;
- (void)updateViews;
- (void)setTintColor:(id)a0 forState:(unsigned long long)a1;

@end
