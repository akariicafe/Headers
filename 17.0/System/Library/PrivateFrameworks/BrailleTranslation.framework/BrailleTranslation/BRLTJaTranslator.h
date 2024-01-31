@class BRLTJaTranslatorInternal;
@protocol BRLTBrailleTranslationDelegateProtocol;

@interface BRLTJaTranslator : NSObject

@property (readonly) BRLTJaTranslatorInternal *underlyingObject;
@property (readonly, nonatomic) id<BRLTBrailleTranslationDelegateProtocol> translationDelegate;

- (void).cxx_destruct;
- (id)initWithTranslationDelegate:(id)a0;

@end
