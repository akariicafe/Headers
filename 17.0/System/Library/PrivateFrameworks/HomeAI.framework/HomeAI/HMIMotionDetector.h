@class NSString;

@interface HMIMotionDetector : HMFObject <HMFLogging>

@property (readonly) struct __CFArray { } *resizedSampleBuffers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (id)_computeOpticalFlow:(struct __CVBuffer { } *)a0 with:(struct __CVBuffer { } *)a1 globalMotionScore:(float *)a2 activityZones:(id)a3 operationMode:(unsigned long long)a4;
- (BOOL)applyActivityZoneFilteringOnSourcePoint:(struct CGPoint { double x0; double x1; })a0 destinationPoint:(struct CGPoint { double x0; double x1; })a1 frameSize:(struct CGSize { double x0; double x1; })a2 activityZones:(id)a3;
- (id)calculateMotionDetection:(struct vector<unsigned char, std::allocator<unsigned char>> { char *x0; char *x1; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x0; } x2; })a0 score:(struct vector<float, std::allocator<float>> { float *x0; float *x1; struct __compressed_pair<float *, std::allocator<float>> { float *x0; } x2; })a1 srcFeatureCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> { void *x0; void *x1; struct __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> { void *x0; } x2; })a2 dstFeatreCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> { void *x0; void *x1; struct __compressed_pair<cv::Point_<float> *, std::allocator<cv::Point_<float>>> { void *x0; } x2; })a3 activityZones:(id)a4 operationMode:(unsigned long long)a5 srcPyramid:(struct vector<cv::Mat, std::allocator<cv::Mat>> { struct Mat *x0; struct Mat *x1; struct __compressed_pair<cv::Mat *, std::allocator<cv::Mat>> { struct Mat *x0; } x2; })a6 frameSize:(struct CGSize { double x0; double x1; })a7 brightnessChange:(float)a8;
- (id)detectWithGlobalMotionScore:(float *)a0 referencePixelBuffer:(struct __CVBuffer { } *)a1 targetPixelBuffer:(struct __CVBuffer { } *)a2 activityZones:(id)a3 detectorMode:(unsigned long long)a4;
- (id)visualizeMotionDetections:(id)a0 frameSize:(struct CGSize { double x0; double x1; })a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;

@end
