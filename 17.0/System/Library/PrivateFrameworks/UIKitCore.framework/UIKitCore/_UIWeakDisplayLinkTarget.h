@interface _UIWeakDisplayLinkTarget : NSObject {
    id _target;
    SEL _action;
}

@property (class, readonly) SEL displayLinkAction;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)_displayLinkTick:(id)a0;
- (void).cxx_destruct;

@end
