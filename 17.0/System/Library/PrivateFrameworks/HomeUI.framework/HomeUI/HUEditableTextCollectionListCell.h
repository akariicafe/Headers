@class UIListContentView, NSArray, UITextField, NSString;

@interface HUEditableTextCollectionListCell : UICollectionViewListCell <HUEditableTextCellProtocol, HUDisableableCellProtocol>

@property (retain, nonatomic) UIListContentView *listContentView;
@property (retain, nonatomic) NSArray *textFieldConstraints;
@property (retain, nonatomic) NSArray *listContentViewConstraints;
@property (readonly, nonatomic) UITextField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDisabled) BOOL disabled;

+ (BOOL)requiresConstraintBasedLayout;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)setContentConfiguration:(id)a0;

@end
