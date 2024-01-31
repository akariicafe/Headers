@protocol OCDDelayedNodeContext;

@interface OCDDelayedNode : NSObject {
    id<OCDDelayedNodeContext> mDelayedContext;
    BOOL mLoaded;
}

- (BOOL)load;
- (void)setLoaded:(BOOL)a0;
- (BOOL)isLoaded;
- (void).cxx_destruct;
- (id)delayedContext;
- (void)setDelayedContext:(id)a0;

@end
