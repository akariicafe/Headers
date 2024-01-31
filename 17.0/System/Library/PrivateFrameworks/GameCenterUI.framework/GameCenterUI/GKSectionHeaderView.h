@class GKLabel, NSString, GKButton, NSLayoutConstraint, UIView;

@interface GKSectionHeaderView : GKHeaderWithUnderlineView

@property (retain, nonatomic) GKButton *rightButton;
@property (nonatomic) unsigned long long sectionIndex;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long maxItemCount;
@property (nonatomic) BOOL allSectionItemsVisible;
@property (retain, nonatomic) NSLayoutConstraint *backgroundViewHeightConstraint;
@property (retain, nonatomic) GKLabel *leftLabel;
@property (retain, nonatomic) NSString *leftText;
@property (retain, nonatomic) NSString *rightText;
@property (nonatomic) SEL showAllAction;
@property (nonatomic) id rightTarget;
@property (nonatomic) SEL rightAction;
@property (nonatomic) void /* function */ *itemCountFormatter;
@property (nonatomic) BOOL manualItemCount;
@property (nonatomic) long long maxRange;
@property (retain, nonatomic) UIView *backgroundView;

+ (id)padMetrics;
+ (id)phoneMetrics;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLabel;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)establishConstraints;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rightButtonFrame;
- (void)rightButtonTouched:(id)a0;
- (void)updateGutterConstraints;

@end
