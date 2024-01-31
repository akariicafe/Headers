@class UIButton, UILabel, CTDisplayPlan;

@interface PSUICellularPlanAddOnPlanSpecifier : PSSpecifier {
    id _target;
    CTDisplayPlan *_displayPlan;
    UILabel *_nameLabel;
    UILabel *_numberLabel;
}

@property (readonly, nonatomic) UIButton *addButton;

- (void)setProperty:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1 displayPlan:(id)a2;

@end
