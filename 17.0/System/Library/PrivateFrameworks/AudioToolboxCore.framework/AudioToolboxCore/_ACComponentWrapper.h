@interface _ACComponentWrapper : NSObject <NSSecureCoding> {
    struct shared_ptr<APComponent> { struct APComponent *__ptr_; struct __shared_weak_count *__cntrl_; } mComponent;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithComponent:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
