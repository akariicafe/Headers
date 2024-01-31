@class CVNLPDecodingLanguageModel, CVNLPDecodingLexicons;

@interface CVNLPLanguageResourceBundle : NSObject

@property (readonly, nonatomic) CVNLPDecodingLexicons *lexicons;
@property (readonly, nonatomic) CVNLPDecodingLanguageModel *characterLanguageModel;
@property (readonly, nonatomic) CVNLPDecodingLanguageModel *wordLanguageModel;

- (void).cxx_destruct;
- (id)initWithLexicons:(id)a0 characterLanguageModel:(id)a1 wordLanguageModel:(id)a2;
- (id)packagedLexiconCursorsUsingContext:(id)a0;
- (id)packagedLexiconRootCursors;

@end
