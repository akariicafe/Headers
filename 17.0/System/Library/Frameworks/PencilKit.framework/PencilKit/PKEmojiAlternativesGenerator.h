@class NSArray, NSXPCConnection, NSString, UIWKDocumentContext, UITextRange, TIDocumentState;
@protocol UIWKInteractionViewProtocol, UITextInput, TIEmojiAlternativesProtocol;

@interface PKEmojiAlternativesGenerator : NSObject {
    NSXPCConnection *_connection;
    id<TIEmojiAlternativesProtocol> _remoteObject;
    id<UITextInput> _textInput;
    TIDocumentState *_documentState;
    NSArray *_localeIdentifiers;
    NSString *_textWithAlternatives;
    UITextRange *_rangeWithAlternatives;
    id<UIWKInteractionViewProtocol, UITextInput> _wkInteractionView;
    UIWKDocumentContext *_wkDocumentContext;
}

- (id)init;
- (void).cxx_destruct;
- (void)_generateAlternatives;
- (void)_generateAlternativesForWebKit;

@end
