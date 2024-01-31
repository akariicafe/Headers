@interface RTPowerAssertion : NSObject {
    void *_powerAssertion;
}

- (id)init;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;

@end
