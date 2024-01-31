@class _PASLock;

@interface SGMultiLabelEspressoClassifierCache : NSObject {
    _PASLock *_currentClassifier;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)outputDimensionWithFile:(id)a0;
- (id)predict:(id)a0 withFile:(id)a1;
- (BOOL)setCachedEspressoClassifierWithFile:(id)a0;

@end
