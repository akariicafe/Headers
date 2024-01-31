@class NSString, UITextInputTraits, PKTextInputElement, UIView, UIWKDocumentContext;
@protocol UITextInput, UIWKInteractionViewProtocol;

@interface PKTextInputElementContent : NSObject {
    PKTextInputElement *_element;
    UITextInputTraits *_textInputTraits;
    long long _dataLoadedState;
    id<UITextInput> __textInput;
    id<UITextInput> __webTextInput;
    NSString *__webComposedContextString;
    UIView<UIWKInteractionViewProtocol> *__webDocumentSourceView;
    UIWKDocumentContext *__webDocumentContext;
    UIWKDocumentContext *__webDocumentCurrentLineContext;
}

- (id)description;
- (void).cxx_destruct;

@end
