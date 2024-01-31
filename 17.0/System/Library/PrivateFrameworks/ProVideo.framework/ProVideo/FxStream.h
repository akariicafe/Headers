@interface FxStream : NSObject {
    struct FxStreamPriv { id x0; } *_priv;
}

- (id)init;
- (void)dealloc;
- (id)provider;
- (id)pin;
- (void)setPin:(id)a0;
- (id)createSampleAtTime:(double)a0;

@end
