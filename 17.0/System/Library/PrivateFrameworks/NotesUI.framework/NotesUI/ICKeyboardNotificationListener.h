@interface ICKeyboardNotificationListener : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } keyboardFrame;

+ (id)sharedListener;

- (id)init;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentKeyboardFrame;
- (void)handleKeyboardWillHide:(id)a0;
- (void)handleKeyboardWillShow:(id)a0;

@end
