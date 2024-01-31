@interface DEGroup : DENode

@property struct shared_ptr<siri::dialogengine::Group> { struct Group *x0; struct __shared_weak_count *x1; } This;

- (id)init;
- (void)dealloc;
- (id)getNodes;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Group> { struct Group *x0; struct __shared_weak_count *x1; })a0;

@end
