@class NSString;

@interface DEParameter : NSObject

@property struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *name;
@property (retain) NSString *type;
@property (retain) NSString *description;
@property (retain) NSString *semanticConcept;
@property (readonly) NSString *defaultValue;
@property (readonly) BOOL overridable;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void *)getSharedPtr;
- (id)initWithSharedPtr:(void *)a0;

@end
