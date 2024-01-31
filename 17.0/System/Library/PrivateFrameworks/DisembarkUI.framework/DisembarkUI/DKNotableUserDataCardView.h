@class UIStackView, DKNotableUserDataCardPrimaryCell, NSLayoutConstraint, NSMutableArray;

@interface DKNotableUserDataCardView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIStackView *secondaryStackView;
@property (retain, nonatomic) NSMutableArray *cells;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (retain, nonatomic) NSLayoutConstraint *bottomStackViewConstraint;
@property (retain, nonatomic) DKNotableUserDataCardPrimaryCell *primaryCell;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (void)_toggleExpanded;
- (void)_setupPrimaryCell:(id)a0 subtitle:(id)a1 icon:(id)a2;
- (void)_setupPrimaryStackView:(id)a0;
- (void)_setupSecondaryStackView;
- (void)addCardCell:(id)a0;

@end
