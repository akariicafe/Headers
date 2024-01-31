@class MLModel;

@interface Image_Estimator_HEIF : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (void)loadContentsOfURL:(id)a0 configuration:(id)a1 completionHandler:(id /* block */)a2;
+ (id)URLOfModelInThisBundle;
+ (void)loadWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (void)predictionFromFeatures:(id)a0 completionHandler:(id /* block */)a1;
- (void)predictionFromFeatures:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithMLModel:(id)a0;
- (id)predictionsFromInputs:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromInput_File_Size:(double)a0 Input_Height:(double)a1 Input_Entropy:(double)a2 Aspect_Ratio:(double)a3 Target_File_Size:(double)a4 Target_Max_Dimension:(double)a5 Compression_Ratio:(double)a6 Input_H_x_W__NumOfPixels_:(double)a7 Target_Height:(double)a8 Target_Width:(double)a9 Input_log_NumOfPixels_:(double)a10 Ratio_of_NumOfPixels:(double)a11 Exponential_Entropy:(double)a12 error:(id *)a13;

@end
