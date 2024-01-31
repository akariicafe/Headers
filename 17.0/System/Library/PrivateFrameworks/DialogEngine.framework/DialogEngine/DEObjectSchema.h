@class NSString;

@interface DEObjectSchema : NSObject

@property struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (readonly) NSString *name;
@property (readonly) NSString *baseObject;
@property (readonly) NSString *description;

+ (id)schema:(id)a0 typeName:(id)a1;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema *x0; struct __shared_weak_count *x1; })a0;
- (id)input:(id)a0 name:(id)a1;
- (id)inputNames:(id)a0;
- (id)property:(id)a0 name:(id)a1;
- (id)propertyNames:(id)a0;

@end
