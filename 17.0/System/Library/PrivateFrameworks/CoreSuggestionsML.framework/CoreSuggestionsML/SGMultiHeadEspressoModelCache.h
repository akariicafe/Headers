@class _PASLock;

@interface SGMultiHeadEspressoModelCache : NSObject {
    _PASLock *_currentModel;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)headDimensionalityWithFile:(id)a0 inputName:(id)a1 headDimensionality:(id)a2;
- (unsigned long long)inputNumParametersWithFile:(id)a0 inputName:(id)a1 headDimensionality:(id)a2;
- (id)predict:(id)a0 heads:(id)a1 withFile:(id)a2 inputName:(id)a3 headDimensionality:(id)a4;
- (id)predict:(id)a0 withFile:(id)a1 inputName:(id)a2 headDimensionality:(id)a3;
- (BOOL)setCachedEspressoClassifierWithFile:(id)a0 inputName:(id)a1 headDimensionality:(id)a2;

@end
