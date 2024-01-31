@class UIKeyboardDockItemButton, NSString, UIImage, UIPanGestureRecognizer, UILongPressGestureRecognizer;

@interface UIKeyboardDockItem : NSObject

@property (retain, nonatomic) UIKeyboardDockItemButton *button;
@property (nonatomic) struct CGPoint { double x; double y; } touchDownPoint;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIKeyboardDockItemButton *view;

+ (id)_standardGlyphColor;
+ (id)_darkStyleGlyphColor;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)imageWithRenderConfig:(id)a0;
- (id)initWithImageName:(id)a0 identifier:(id)a1;

@end
