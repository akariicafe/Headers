@interface SWKeyboardConfiguration : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputAccessoryViewFrame;
@property (nonatomic) BOOL isKeyboardSplit;
@property (nonatomic) BOOL isKeyboardFloating;
@property (nonatomic) BOOL isHardwareKeyboard;
@property (nonatomic) BOOL isKeyboardVisible;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inputAccessoryViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 isKeyboardSplit:(BOOL)a2 isKeyboardFloating:(BOOL)a3 isHardwareKeyboard:(BOOL)a4 isKeyboardVisible:(BOOL)a5;

@end
