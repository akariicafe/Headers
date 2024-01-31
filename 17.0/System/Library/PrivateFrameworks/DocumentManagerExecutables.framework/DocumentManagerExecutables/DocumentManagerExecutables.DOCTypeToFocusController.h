@class UITextInputAssistantItem, UIView;

@interface DocumentManagerExecutables.DOCTypeToFocusController : UIResponder <UIKeyInput> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ typeToFocusInputBuffer;
    void /* unknown type, empty encoding */ typeToFocusTimeout;
    void /* unknown type, empty encoding */ typeToFocusInputView;
    void /* unknown type, empty encoding */ eventHadModifierKey;
}

@property (nonatomic) long long autocorrectionType;
@property (nonatomic, readonly) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic, readonly) BOOL hasText;
@property (nonatomic, readonly) UIView *inputView;

- (id)init;
- (void)insertText:(id)a0;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)typingTimeout;

@end
