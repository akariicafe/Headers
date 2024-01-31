@interface WebPolicyDecisionListenerPrivate : NSObject {
    struct RetainPtr<id> { void *m_ptr; } target;
    SEL action;
}

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
