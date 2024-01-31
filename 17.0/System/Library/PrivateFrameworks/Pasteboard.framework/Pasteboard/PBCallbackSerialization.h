@interface PBCallbackSerialization : NSObject {
    id /* block */ _endBlock;
    BOOL _hasBegun;
    BOOL _hasEnded;
}

- (void).cxx_destruct;
- (void)sendBeginBlock:(id /* block */)a0;
- (void)sendEndBlock:(id /* block */)a0;

@end
