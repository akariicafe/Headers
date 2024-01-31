@class NSString, NSDictionary, CSUPixelBufferDescriptor;

@interface CSUDetectionPrintNetworkConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *espressoNetworkPath;
@property (readonly, copy, nonatomic) NSString *inputImageTensorName;
@property (readonly, nonatomic) NSDictionary *outputTapPointFeatures;
@property (readonly, nonatomic) CSUPixelBufferDescriptor *inputPixelBufferDescriptor;
@property int executionEngine;
@property (readonly, nonatomic) long long revision;

+ (long long)_resolvedRevision:(long long)a0;
+ (id)availableRevisions;
+ (id)detectionPrintConfigurationForRevision:(long long)a0 error:(id *)a1;
+ (id)validateAndInitDetectionPrintForRevision:(long long)a0 forNetworkPath:(id)a1 withInputImageTensorName:(id)a2 withInputImageWidth:(unsigned long long)a3 withInputImageHeight:(unsigned long long)a4 withInputImageBytesPerRow:(unsigned long long)a5 withInputFeaturesDict:(id)a6 error:(id *)a7;

- (void).cxx_destruct;
- (id)initWithConfigurationForRevision:(long long)a0 espressoNetworkPath:(id)a1 inputImageTensorName:(id)a2 imageWidth:(unsigned long long)a3 imageHeight:(unsigned long long)a4 imageBytesPerRow:(unsigned long long)a5 featuresDict:(id)a6;

@end
