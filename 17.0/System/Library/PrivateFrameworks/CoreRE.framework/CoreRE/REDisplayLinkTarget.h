@interface REDisplayLinkTarget : NSObject {
    void *_clock;
}

- (void)update;
- (id)initWithClock:(void *)a0;
- (void)updateOnQueue;

@end
