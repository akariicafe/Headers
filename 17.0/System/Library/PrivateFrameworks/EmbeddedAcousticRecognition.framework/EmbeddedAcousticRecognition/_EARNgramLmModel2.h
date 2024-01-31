@class NSString;

@interface _EARNgramLmModel2 : _EARLmModel2

@property (readonly, nonatomic) struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 *__ptr_; struct __shared_weak_count *__cntrl_; } ngramModel;
@property (readonly, nonatomic) NSString *arpaFileName;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setProtectionClass:(id)a0;
- (id)_initWithModel:(struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)writeToDirectory:(id)a0;

@end
