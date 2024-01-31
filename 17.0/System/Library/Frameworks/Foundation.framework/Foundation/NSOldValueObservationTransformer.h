@interface NSOldValueObservationTransformer : NSObservationTransformer {
    id _lastValue;
}

+ (id)oldValuesTransformer;

- (void)dealloc;
- (void)_receiveBox:(id)a0;

@end
