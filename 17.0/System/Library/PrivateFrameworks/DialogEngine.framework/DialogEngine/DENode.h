@class NSString;

@interface DENode : NSObject

@property struct shared_ptr<siri::dialogengine::Node> { struct Node *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *conditionName;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getDialog;
- (id)getGlobalId:(id)a0;
- (struct shared_ptr<siri::dialogengine::Node> { struct Node *x0; struct __shared_weak_count *x1; })getSharedPtr;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Node> { struct Node *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)isOfType:(unsigned long long)a0;

@end
