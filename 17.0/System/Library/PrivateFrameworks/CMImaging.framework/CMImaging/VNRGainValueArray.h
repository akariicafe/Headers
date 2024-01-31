@interface VNRGainValueArray : NSObject {
    unsigned long long _nGainValuePairs;
    struct { float x0; float x1; } *_gainValuePairs;
}

- (void)dealloc;
- (id)initWithArray:(id)a0;
- (float)interpolateValueForGain:(float)a0;

@end
