@interface HTFenceAssertion : NSObject {
    unsigned long long __name;
    unsigned long long __startTime;
}

- (void)invalidate;
- (void)blown;
- (id)initWithFenceName:(unsigned long long)a0;

@end
