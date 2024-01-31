@class MLModel;

@interface AXElementVision__generated__ : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (id)urlOfModelInThisBundle;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromImage:(struct __CVBuffer { } *)a0 iouThreshold:(double)a1 confidenceThreshold:(double)a2 error:(id *)a3;

@end
