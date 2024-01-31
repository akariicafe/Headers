@class NSLocale, NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface EMTTranslator : NSObject {
    struct shared_ptr<quasar::TranslatorFactory> { struct TranslatorFactory *__ptr_; struct __shared_weak_count *__cntrl_; } _translatorFactory;
    struct shared_ptr<quasar::Translator> { struct Translator *__ptr_; struct __shared_weak_count *__cntrl_; } _translator;
    NSLocale *_sourceLocale;
    NSLocale *_targetLocale;
    struct vector<quasar::SystemConfig, std::allocator<quasar::SystemConfig>> { struct SystemConfig *__begin_; struct SystemConfig *__end_; struct __compressed_pair<quasar::SystemConfig *, std::allocator<quasar::SystemConfig>> { struct SystemConfig *__value_; } __end_cap_; } _configs;
    BOOL _skipNonFinalToCatchup;
    NSOperationQueue *_translationRequestsQueue;
    NSObject<OS_dispatch_queue> *_translationQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithModelURL:(id)a0;
- (id)initWithModelURLs:(id)a0 task:(id)a1 skipNonFinalToCatchup:(BOOL)a2;
- (void)translateString:(id)a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (struct shared_ptr<quasar::Translator> { struct Translator *x0; struct __shared_weak_count *x1; })_prepareFor:(id)a0 to:(id)a1;
- (void)_dispatchTranslationRequest:(struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })a0 isFinal:(BOOL)a1 spans:(id)a2 translator:(struct shared_ptr<quasar::Translator> { struct Translator *x0; struct __shared_weak_count *x1; })a3 sourceLocale:(id)a4 targetLocale:(id)a5 options:(id)a6 completion:(id /* block */)a7;
- (struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; })_tokenizeString:(id)a0;
- (void)getTranslatorWithCompletion:(id /* block */)a0;
- (id)initWithModelURL:(id)a0 task:(id)a1;
- (id)initWithModelURL:(id)a0 task:(id)a1 skipNonFinalToCatchup:(BOOL)a2;
- (id)initWithModelURL:(id)a0 task:(id)a1 skipNonFinalToCatchup:(BOOL)a2 translatorCacheSize:(long long)a3;
- (id)initWithModelURLs:(id)a0 task:(id)a1;
- (id)initWithModelURLs:(id)a0 task:(id)a1 skipNonFinalToCatchup:(BOOL)a2 translatorCacheSize:(long long)a3;
- (void)loadTranslatorFrom:(id)a0 to:(id)a1;
- (void)prepareFor:(id)a0 to:(id)a1;
- (void)translateSpeech:(id)a0 completion:(id /* block */)a1;
- (void)translateSpeech:(id)a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)translateString:(id)a0 completion:(id /* block */)a1;
- (void)translateString:(id)a0 from:(id)a1 to:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)translateString:(id)a0 from:(id)a1 to:(id)a2 overrides:(id)a3 completion:(id /* block */)a4;
- (void)translateTokens:(id)a0 from:(id)a1 to:(id)a2 completion:(id /* block */)a3;
- (void)translateTokens:(id)a0 from:(id)a1 to:(id)a2 spans:(id)a3 completion:(id /* block */)a4;
- (void)translateTokens:(id)a0 from:(id)a1 to:(id)a2 spans:(id)a3 options:(id)a4 completion:(id /* block */)a5;
- (void)translateTokens:(id)a0 from:(id)a1 to:(id)a2 spans:(id)a3 overrides:(id)a4 completion:(id /* block */)a5;
- (void)translateTokens:(id)a0 isFinal:(BOOL)a1 completion:(id /* block */)a2;
- (void)translateTokens:(id)a0 isFinal:(BOOL)a1 spans:(id)a2 completion:(id /* block */)a3;
- (void)translateTokens:(id)a0 isFinal:(BOOL)a1 spans:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)translateTokens:(id)a0 isFinal:(BOOL)a1 spans:(id)a2 overrides:(id)a3 completion:(id /* block */)a4;

@end
