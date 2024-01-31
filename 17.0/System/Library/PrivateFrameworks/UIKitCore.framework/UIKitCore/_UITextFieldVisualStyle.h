@protocol _UITextFieldVisualStyleSubject;

@interface _UITextFieldVisualStyle : NSObject

@property (weak, nonatomic) id<_UITextFieldVisualStyleSubject> styleSubject;

+ (id)inferredVisualStyleWithStyleSubject:(id)a0;

- (id)placeholderColor;
- (void)handleTextVibrancy;
- (id)defaultTextColorForKeyboardAppearance;
- (BOOL)textShouldUseVibrancy;
- (id)defaultFocusedTextColor;
- (id)defaultTextColor;
- (void).cxx_destruct;
- (id)parentViewForTextContentView;
- (id)initWithStyleSubject:(id)a0;

@end
