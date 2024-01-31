@class UILabel, UIView;
@protocol CKActionMenuItemView;

@interface CKActionMenuItem : NSObject

@property (retain, nonatomic) UIView<CKActionMenuItemView> *view;
@property (retain, nonatomic) UILabel<CKActionMenuItemView> *label;
@property (retain, nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (void)animate:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)itemWithImageTemplate:(id)a0 tintColor:(id)a1 highlightedTintColor:(id)a2 target:(id)a3 action:(SEL)a4;

- (id)init;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithView:(id)a0 label:(id)a1 target:(id)a2 action:(SEL)a3;
- (void)sendAction;
- (void)updateForState:(long long)a0 touchInside:(BOOL)a1;

@end
