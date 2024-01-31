@class NSBundle;
@protocol BRLTTranslatorProtocol;

@interface BRLTSTranslator : NSObject

@property (readonly, nonatomic) id<BRLTTranslatorProtocol> translator;
@property (readonly, nonatomic) NSBundle *bundle;

- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (id)brailleForText:(id)a0 parameters:(id)a1 locations:(out id *)a2;
- (id)textForBraille:(id)a0 parameters:(id)a1 locations:(out id *)a2;

@end
