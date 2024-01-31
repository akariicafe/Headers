@class NSArray;
@protocol UISystemDefaultTextInputAssistantItemDelegate;

@interface UISystemDefaultTextInputAssistantItem : UITextInputAssistantItem

@property (nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (retain, nonatomic) NSArray *defaultSystemLeadingBarButtonGroups;
@property (retain, nonatomic) NSArray *defaultSystemTrailingBarButtonGroups;
@property (weak, nonatomic) id<UISystemDefaultTextInputAssistantItemDelegate> delegate;
@property (readonly, nonatomic) BOOL isKeyboardCameraItem;

- (id)init;
- (void)assistantEmoji;
- (void)assistantItalic;
- (void)assistantDismiss;
- (void)assistantDictationMicOn;
- (void)assistantPaste:(id)a0 forEvent:(id)a1;
- (void)assistantReturnKey;
- (void)setLeadingBarButtonGroups:(id)a0;
- (void)performSystemButtonActionForStyle:(long long)a0;
- (void)assistantBold;
- (void)_updateIsSystemItem;
- (void).cxx_destruct;
- (void)assistantUndo;
- (void)assistantShowKeyboard;
- (void)analyticsDispatchWithActionStyle:(long long)a0;
- (BOOL)canPerformSystemButtonActionForStyle:(long long)a0;
- (void)assistantCopy;
- (void)assistantExpand;
- (void)assistantDictation;
- (void)assistantRedo;
- (void)assistantCut;
- (void)assistantUnderline;
- (void)assistantWriteboard;
- (SEL)_responderSelectorForSystemButtonStyle:(long long)a0;
- (void)setTrailingBarButtonGroups:(id)a0;

@end
