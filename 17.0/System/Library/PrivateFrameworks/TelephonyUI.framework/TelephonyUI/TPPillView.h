@class UIStackView, UITapGestureRecognizer, NSString, UILabel, NSLayoutConstraint, TPBadgeView;
@protocol TPPillViewDelegate;

@interface TPPillView : TPControl

@property (readonly, nonatomic) TPBadgeView *badgeView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UITapGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) NSLayoutConstraint *stackViewBottomAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeftAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewRightAnchorLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTopAnchorLayoutConstraint;
@property (weak, nonatomic) id<TPPillViewDelegate> delegate;
@property (copy, nonatomic) NSString *badgeText;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long theme;

- (void)commonInit;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)updateFonts;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)handleTap:(id)a0;
- (void)updateTheme;
- (void)loadConstraints;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithTitle:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 theme:(unsigned long long)a2;
- (void)unloadConstraints;

@end
