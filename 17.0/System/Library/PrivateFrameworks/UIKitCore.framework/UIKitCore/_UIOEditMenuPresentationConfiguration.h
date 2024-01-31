@class NSString, UIMenu;

@interface _UIOEditMenuPresentationConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIMenu *menu;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetRect;
@property (readonly, nonatomic) BOOL enforcesMenuControllerLifecycle;
@property (readonly, nonatomic) long long preferredArrowDirection;
@property (readonly, nonatomic) long long initialUserInterfaceStyle;

+ (id)configurationWithMenu:(id)a0 preferredArrowDirection:(long long)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 enforcesMenuControllerLifecycle:(BOOL)a3 initialUserInterfaceStyle:(long long)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)configurationWithTargetOrigin:(struct CGPoint { double x0; double x1; })a0;

@end
