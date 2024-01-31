@interface AppleTypeCRetimerRestoreInfoHelperOS : NSObject {
    void /* function */ *_logFunction;
    void *_logContext;
    BOOL _verbose;
}

- (void)log:(id)a0;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (void)logInternal:(id)a0 arguments:(char *)a1;
- (void)verboseLog:(id)a0;

@end
