@protocol BRLTBrailleTranslationDelegateProtocol;

@interface BRLTJaTranslatorWrapper : NSObject {
    id<BRLTBrailleTranslationDelegateProtocol> _translationDelegate;
}

- (void).cxx_destruct;
- (id)brailleForText:(id)a0;
- (id)textForBraille:(id)a0;
- (id)arrayFromData:(id)a0;
- (id)initWithTranslationDelegate:(id)a0;

@end
