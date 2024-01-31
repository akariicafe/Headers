@interface _EARLanguageDetector : NSObject {
    struct unique_ptr<quasar::LanguageDetector, std::default_delete<quasar::LanguageDetector>> { struct __compressed_pair<quasar::LanguageDetector *, std::default_delete<quasar::LanguageDetector>> { struct LanguageDetector *__value_; } __ptr_; } languageDetector;
}

@property (nonatomic) unsigned int featureQueuePriority;

+ (void)initialize;
+ (id)localesOfMessages:(id)a0;
+ (struct vector<std::optional<quasar::language_detector::Locale>, std::allocator<std::optional<quasar::language_detector::Locale>>> { void *x0; void *x1; struct __compressed_pair<std::optional<quasar::language_detector::Locale> *, std::allocator<std::optional<quasar::language_detector::Locale>>> { void *x0; } x2; })quasarLocalesOfMessages:(id)a0;
+ (struct shared_ptr<const quasar::LDContext> { struct LDContext *x0; struct __shared_weak_count *x1; })updateContext:(const void *)a0 withMessageLocales:(const void *)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfigFile:(id)a0;
- (id)initWithConfigFile:(id)a0 overrides:(id)a1;
- (id)startRequestWith:(unsigned long long)a0 context:(id)a1 delegate:(id)a2;

@end
