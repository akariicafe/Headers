@class NSString;

@interface _EARNgramLmModel : _EARLmModel

@property (readonly, nonatomic) struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 *__ptr_; struct __shared_weak_count *__cntrl_; } ngramModel;
@property (readonly, nonatomic) struct shared_ptr<quasar::NgramFstConfig> { struct NgramFstConfig *__ptr_; struct __shared_weak_count *__cntrl_; } ngramBuildConfig;
@property (readonly, nonatomic) NSString *arpaFileName;

+ (void)initialize;

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_initWithModel:(struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 *x0; struct __shared_weak_count *x1; })a0 config:(struct shared_ptr<quasar::NgramFstConfig> { struct NgramFstConfig *x0; struct __shared_weak_count *x1; })a1;
- (id)generateNgramCounts:(id)a0;
- (id)initFromDirectory:(id)a0;
- (id)initWithConfiguration:(id)a0 root:(id)a1;
- (BOOL)writeToDirectory:(id)a0;

@end
