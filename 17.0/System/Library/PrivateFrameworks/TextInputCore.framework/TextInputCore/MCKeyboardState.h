@interface MCKeyboardState : NSObject <NSCopying>

@property (readonly, nonatomic) long long userInterfaceIdiom;
@property (readonly, nonatomic) BOOL isSplitKeyboard;
@property (readonly, nonatomic) BOOL isFloatingKeyboard;
@property (readonly, nonatomic) BOOL isHardwareKeyboard;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUserInterfaceIdiom:(long long)a0 isSplitKeyboard:(BOOL)a1 isFloatingKeyboard:(BOOL)a2 isHardwareKeyboard:(BOOL)a3;

@end
