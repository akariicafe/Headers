@class NSSet;

@interface Image_Estimator_HEIFInput : NSObject <MLFeatureProvider>

@property (nonatomic) double Input_File_Size;
@property (nonatomic) double Input_Height;
@property (nonatomic) double Input_Entropy;
@property (nonatomic) double Aspect_Ratio;
@property (nonatomic) double Target_File_Size;
@property (nonatomic) double Target_Max_Dimension;
@property (nonatomic) double Compression_Ratio;
@property (nonatomic) double Input_H_x_W__NumOfPixels_;
@property (nonatomic) double Target_Height;
@property (nonatomic) double Target_Width;
@property (nonatomic) double Input_log_NumOfPixels_;
@property (nonatomic) double Ratio_of_NumOfPixels;
@property (nonatomic) double Exponential_Entropy;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithInput_File_Size:(double)a0 Input_Height:(double)a1 Input_Entropy:(double)a2 Aspect_Ratio:(double)a3 Target_File_Size:(double)a4 Target_Max_Dimension:(double)a5 Compression_Ratio:(double)a6 Input_H_x_W__NumOfPixels_:(double)a7 Target_Height:(double)a8 Target_Width:(double)a9 Input_log_NumOfPixels_:(double)a10 Ratio_of_NumOfPixels:(double)a11 Exponential_Entropy:(double)a12;

@end
