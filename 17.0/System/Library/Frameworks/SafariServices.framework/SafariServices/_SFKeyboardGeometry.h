@interface _SFKeyboardGeometry : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeWithoutBar;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeWithBar;

+ (id)_keyboardGeometryForCurrentDeviceWithInterfaceOrientation:(long long)a0;
+ (id)keyboardGeometryForInterfaceOrientation:(long long)a0;

- (id)_initWithFallbackSizeForOrientation:(long long)a0;
- (id)_initWithSizeWithoutBar:(struct CGSize { double x0; double x1; })a0 sizeWithBar:(struct CGSize { double x0; double x1; })a1;

@end
