@interface WebInterruptionObserverHelper : NSObject {
    void *_callback;
}

- (void)dealloc;
- (id)initWithCallback:(void *)a0;
- (void)clearCallback;
- (void)interruption:(id)a0;

@end
