@class NSMutableArray, NSLayoutConstraint;

@interface OBBulletedList : UIView

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSMutableArray *verticalConstraints;
@property (retain, nonatomic) NSLayoutConstraint *leadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingConstraint;

- (void)_updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (BOOL)_shouldHandleLandscapeiPhoneLayout;
- (void)_updatePaddingForOrientation;
- (void)addBulletedListItem:(id)a0;
- (void)addItemWithDescription:(id)a0 image:(id)a1;
- (void)addItemWithDescription:(id)a0 symbolName:(id)a1;
- (void)addItemWithTitle:(id)a0 description:(id)a1 image:(id)a2;
- (void)addItemWithTitle:(id)a0 description:(id)a1 image:(id)a2 linkButton:(id)a3;
- (void)addItemWithTitle:(id)a0 description:(id)a1 image:(id)a2 tintColor:(id)a3;
- (void)addItemWithTitle:(id)a0 description:(id)a1 image:(id)a2 tintColor:(id)a3 linkButton:(id)a4;
- (void)addItemWithTitle:(id)a0 description:(id)a1 symbolName:(id)a2;
- (void)addItemWithTitle:(id)a0 description:(id)a1 symbolName:(id)a2 linkButton:(id)a3;
- (void)addItemWithTitle:(id)a0 description:(id)a1 symbolName:(id)a2 tintColor:(id)a3;
- (void)addItemWithTitle:(id)a0 description:(id)a1 symbolName:(id)a2 tintColor:(id)a3 linkButton:(id)a4;
- (double)bulletedListItemSpacing;

@end
