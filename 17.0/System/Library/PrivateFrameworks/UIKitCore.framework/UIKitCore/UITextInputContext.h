@interface UITextInputContext : NSObject

@property (nonatomic, getter=isPencilInputExpected) BOOL pencilInputExpected;
@property (nonatomic, getter=isDictationInputExpected) BOOL dictationInputExpected;
@property (nonatomic, getter=isHardwareKeyboardInputExpected) BOOL hardwareKeyboardInputExpected;

+ (id)current;
+ (id)new;

- (void)updateInputSource:(long long)a0 toUpdate:(BOOL)a1;

@end
