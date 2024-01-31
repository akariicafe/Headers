@interface DYDisplayLinkInterposer : NSObject {
    id _target;
    SEL _sel;
    unsigned long long _endTimestamp;
}

- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1;
- (void)forwardDisplayLinkCallback:(id)a0;

@end
