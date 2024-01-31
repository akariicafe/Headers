@class NSString;

@interface DEPatternSchema : NSObject

@property struct shared_ptr<siri::dialogengine::PatternSchema> { struct PatternSchema *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (readonly) NSString *name;
@property (readonly) NSString *description;

+ (id)schema:(id)a0 typeName:(id)a1;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computedParameter:(id)a0;
- (id)computedParameterNames;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::PatternSchema> { struct PatternSchema *x0; struct __shared_weak_count *x1; })a0;
- (id)requiredParameter:(id)a0;
- (id)requiredParameterNames;
- (id)setting:(id)a0;
- (id)settingNames;

@end
