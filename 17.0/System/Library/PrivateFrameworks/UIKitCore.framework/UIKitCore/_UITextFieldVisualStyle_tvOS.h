@class NSString;

@interface _UITextFieldVisualStyle_tvOS : _UITextFieldVisualStyle <_UITextFieldEditingProcessorDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)placeholderColor;
- (void)handleTextVibrancy;
- (id)defaultTextColorForKeyboardAppearance;
- (BOOL)textShouldUseVibrancy;
- (id)defaultFocusedTextColor;
- (id)defaultTextColor;
- (id)parentViewForTextContentView;
- (id)_defaultEditingFont;
- (id)_defaultTextColorBlackKeyboard;
- (id)_defaultTextColorDarkKeyboard;
- (id)_defaultTextColorForUserInterfaceStyle;
- (id)_defaultTextColorLightKeyboard;
- (id)_placeholderTextColorBlackKeyboard;
- (id)_placeholderTextColorDarkKeyboard;
- (id)_placeholderTextColorFocused;
- (id)_placeholderTextColorLightKeyboard;
- (id)editingProcessorOverridingEditingAttributes:(id)a0;

@end
