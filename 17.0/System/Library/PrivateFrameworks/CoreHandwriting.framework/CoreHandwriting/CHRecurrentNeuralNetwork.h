@class NSString;

@interface CHRecurrentNeuralNetwork : NSObject

@property (readonly, nonatomic) NSString *modelName;

+ (id)normalizedDrawing:(id)a0 scaleFactor:(double)a1 interpolationDistance:(double)a2 outputPointMap:(void *)a3;

- (void).cxx_destruct;
- (id)initWithModelName:(id)a0;
- (id)normalizedDrawing:(id)a0 targetHeight:(double)a1 minimumDrawingSize:(struct CGSize { double x0; double x1; })a2 interpolationDistance:(double)a3 outScaleFactor:(double *)a4 outputPointMap:(void *)a5;

@end
