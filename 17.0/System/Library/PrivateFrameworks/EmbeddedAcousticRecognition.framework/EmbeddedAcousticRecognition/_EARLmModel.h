@interface _EARLmModel : NSObject

@property (readonly, nonatomic) struct shared_ptr<quasar::LmModel2> { struct LmModel2 *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (readonly, nonatomic) struct shared_ptr<quasar::LmBuildConfig> { struct LmBuildConfig *__ptr_; struct __shared_weak_count *__cntrl_; } buildConfig;

+ (void)initialize;
+ (void)removeWithDirectory:(id)a0;

- (void)setWeight:(float)a0;
- (float)weight;
- (id).cxx_construct;
- (double)age;
- (id)metrics;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)handle;
- (id)_initWithModel:(struct shared_ptr<quasar::LmModel2> { struct LmModel2 *x0; struct __shared_weak_count *x1; })a0;
- (id)deserializeModelData:(id)a0;
- (id)initFromDirectory:(id)a0;
- (id)initWithConfiguration:(id)a0 root:(id)a1;
- (id)serializedModelWithLanguage:(id)a0 modelData:(id)a1 oovs:(id)a2;
- (BOOL)trainWithData:(id)a0;
- (BOOL)trainWithData:(id)a0 shouldStop:(id /* block */)a1;
- (BOOL)writeToDirectory:(id)a0;

@end
