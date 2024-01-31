@interface UIAssistantBarButtonItemProvider : NSObject

+ (void)dismissFloatingKeyboardFromPencilKitIfNeeded;
+ (void)updateFloatingAssistantBarIfNeeded;
+ (id)configuredSymbolImageWithName:(id)a0 size:(double)a1;
+ (BOOL)_isScribbleButtonsVisible;
+ (id)systemDefaultAssistantItem;
+ (id)compactSystemAssistantItem;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)a0;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1 forcePlainButton:(BOOL)a2;
+ (BOOL)_isKeyboardItemEnabled;
+ (id)unmodifiableSystemAssistantItem:(long long)a0;
+ (BOOL)_isDismissButtonVisible;
+ (id)inputWindowController;
+ (BOOL)_isEmojiButtonVisible;
+ (id)languageIndicatorMenu:(BOOL)a0;
+ (void)setScribbleLanguageIdentifier:(id)a0;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)a0;
+ (id)dictationMenu;
+ (id)actionForInputMode:(id)a0;
+ (BOOL)_isMinimizeAssistantBarButtonVisible;
+ (BOOL)isFloatingKeyboardVisible;
+ (void)presentFloatingKeyboard;
+ (id)dictationActionForInputMode:(id)a0 inCurrentInputMode:(id)a1;
+ (BOOL)_isShowKeyboardButtonVisible;
+ (BOOL)_isDictationButtonVisible;
+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)a0;
+ (BOOL)isKeyboardGroupVisible;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1;
+ (void)dismissFloatingKeyboard;
+ (id)languageIndicatorImage;
+ (BOOL)_isInputModeVisible:(id)a0;
+ (void)setAssistantBarCompact:(BOOL)a0;
+ (id)barButtonItemGroupForTextFormattingWithTarget:(id)a0 action:(SEL)a1;
+ (id)languageIndicatorItem:(BOOL)a0;

@end
