@class NSMutableDictionary, CIContext;

@interface CIRectangleDetector : CIDetector {
    NSMutableDictionary *featureOptions;
}

@property (retain, nonatomic) CIContext *context;

- (void)releaseResources;
- (void)dealloc;
- (id)featuresInImage:(id)a0;
- (id)featuresInImage:(id)a0 options:(id)a1;
- (id)initWithContext:(id)a0 options:(id)a1;

@end
