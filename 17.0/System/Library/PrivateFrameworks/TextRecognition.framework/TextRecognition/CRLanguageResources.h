@class CVNLPLanguageResourceBundle, NSLocale;

@interface CRLanguageResources : NSObject

@property (retain) CVNLPLanguageResourceBundle *_cvnlpLanguageResourceBundle;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) void *lmCharacterLanguageModel;
@property (readonly, nonatomic) struct CVNLPLanguageModel { } *cvnlpCharacterLanguageModel;
@property (readonly, nonatomic) struct _LXLexicon { } *staticLexicon;
@property (readonly, nonatomic) void *wordLanguageModel;
@property (readonly, nonatomic) void *wordTokenizer;
@property (readonly, nonatomic) BOOL isCustomWordsSupported;

+ (struct CVNLPLanguageModel { } *)createCVNLPCharacterLanguageModel:(id)a0;
+ (void *)createCharacterModel:(id)a0;
+ (struct _LXLexicon { } *)createStaticLexicon:(id)a0;
+ (void *)createWordLanguageModel:(id)a0 type:(long long)a1;
+ (BOOL)isCharLMForLanguageAvailableInTextRecognition:(id)a0;
+ (BOOL)isCustomWordsSupportedForLanguageIdentifier:(id)a0;
+ (BOOL)isLanguageSupported:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)cvnlpLanguageResourceBundle:(id)a0 lmConfig:(id)a1;
- (id)initWithLanguageIdentifier:(id)a0 type:(long long)a1;

@end
