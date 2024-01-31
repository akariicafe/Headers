@class CIContext;

@interface CIVNDetector : CIDetector {
    CIContext *context;
}

- (void)dealloc;
- (id)featuresInImage:(id)a0 withContext:(id)a1;
- (id)initWithContext:(id)a0 options:(id)a1;

@end
