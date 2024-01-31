@class NSString, UIImage, UIView;

@interface UIAccessibilityHUDItem : NSObject <NSCopying>

@property (nonatomic) BOOL disabledAppearance;
@property (nonatomic) BOOL flattenImage;
@property (nonatomic) BOOL scaleImage;
@property (nonatomic) long long customUserInterfaceStyle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageInsets;
@property (retain, nonatomic) UIView *customView;

+ (id)HUDItemForTabBarItem:(id)a0;
+ (id)HUDItemForBarButtonItem:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 isBackButton:(BOOL)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCustomView:(id)a0;
- (id)initWithTitle:(id)a0 image:(id)a1 imageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (id)initWithTitle:(id)a0 image:(id)a1 imageInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 scaleImage:(BOOL)a3;

@end
