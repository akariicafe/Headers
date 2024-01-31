@class NSArray, HUColoredButton, HUChevronButton, UILabel;
@protocol HUGridEmptyHomeViewDelegate;

@interface HUGridEmptyHomeView : UIView

@property (retain, nonatomic) UILabel *instructionsLabel;
@property (retain, nonatomic) HUColoredButton *addAccessoryButton;
@property (retain, nonatomic) HUChevronButton *learnToAddAccessoryButton;
@property (retain, nonatomic) HUChevronButton *storeButton;
@property (retain, nonatomic) NSArray *constraints;
@property (weak, nonatomic) id<HUGridEmptyHomeViewDelegate> delegate;

+ (BOOL)requiresConstraintBasedLayout;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_addNewAccessory:(id)a0;
- (void)_openLearnToAddAccessories:(id)a0;
- (void)_openStore:(id)a0;
- (void)_setupCommonAppearance;

@end
