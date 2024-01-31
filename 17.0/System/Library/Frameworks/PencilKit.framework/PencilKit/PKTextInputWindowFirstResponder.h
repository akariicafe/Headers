@class UITextInputAssistantItem;

@interface PKTextInputWindowFirstResponder : NSObject

@property (readonly, nonatomic, getter=isVisible) BOOL isVisible;
@property (readonly, nonatomic, getter=isPencilTextInputSource) BOOL pencilTextInputSource;
@property (readonly, nonatomic) long long textInputSource;
@property (readonly, nonatomic, getter=isEditableTextInput) BOOL editableTextInput;
@property (readonly, nonatomic, getter=isEditableTextInputWithPencilTextInputSource) BOOL editableTextInputWithPencilTextInputSource;
@property (readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (nonatomic) BOOL disableInputAssistant;
@property (nonatomic, getter=isNotesHandwritingResponder) BOOL notesHandwritingResponder;

- (void).cxx_destruct;
- (id)initWithIsVisible:(BOOL)a0 isEditableTextInput:(BOOL)a1 textInputSource:(long long)a2 inputAssistantItem:(id)a3;

@end
