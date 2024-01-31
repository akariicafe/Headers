@class UIImageView, UIView, NSLayoutConstraint, UIButton;

@interface GKDashboardPlayerPickerCell : GKDashboardPlayerCell

@property (weak, nonatomic) UIImageView *selectionView;
@property (weak, nonatomic) UIView *ringView;
@property (weak, nonatomic) UIButton *selectionButton;
@property (weak, nonatomic) NSLayoutConstraint *nameConstraint;
@property (weak, nonatomic) NSLayoutConstraint *selectionHorizontalConstraint;
@property (weak, nonatomic) NSLayoutConstraint *selectionVerticalConstraint;
@property (weak, nonatomic) NSLayoutConstraint *statusHeightConstraint;
@property (nonatomic) double nameInitialConstant;
@property (nonatomic) double selectionInitialHorizontalConstant;
@property (nonatomic) double selectionInitialVerticalConstant;
@property (nonatomic) double statusInitialConstant;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic) BOOL showsPlayerSubtitle;
@property (nonatomic) BOOL showsMessagesHandleInStatusText;

+ (struct CGSize { double x0; double x1; })defaultSize;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void).cxx_destruct;
- (void)setPlayer:(id)a0;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0;
- (void)setStatusText:(id)a0;
- (void)setStatusWithAchievementEarnedPoints:(long long)a0 andDate:(id)a1;

@end
